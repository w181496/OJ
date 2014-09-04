#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<iomanip>
using namespace std;
struct S
{
    int a,b;
};
bool cmp(S a,S b)
{
    return a.a<b.a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    S arr[100010];
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i].a>>arr[i].b;
    sort(arr,arr+n,cmp);
    bool chk=true;
    for(int i=1;i<n;++i)
    {
        if(arr[i].b<arr[i-1].b)
        {
            chk=false;
            break;
        }
    }
    if(chk)
        cout<<"Poor Alex"<<endl;
    else
        cout<<"Happy Alex"<<endl;
    return 0;
}