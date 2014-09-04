#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
struct object
{
    string name;
    int money;
};
bool compare(const object &a,const object &b)
{
    return (a.name<b.name);
}
int main()
{
    int t,n;
    const int money[11]={100,90,80,70,60,50,40,30,20,10,0};
    while(cin>>t>>n)
    {
        if(n==0)
        {
            cout<<"No one"<<endl;
            continue;
        }
        object obj[n];
        for(int i=0;i<n;++i)
        {
            cin>>obj[i].name;
            obj[i].money=money[i];
        }
        sort(obj,obj+n,compare);
        for(int i=0;i<n;++i)
        {
            cout<<obj[i].name;
            for(int j=1;j<=t-obj[i].name.size();++j)cout<<" ";
            cout<<"  $"<<obj[i].money<<endl;
        }
    }
}