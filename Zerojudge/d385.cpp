//貪心 
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(string a,string b)
{
    return(a+b)>(b+a);
}
int main()
{
    int n;
    string t[51];
    while(cin>>n&&n!=0)
    {
        for(int i=0;i<n;++i)
            cin>>t[i];
        sort(t,t+n,cmp);
        for(int i=0;i<n;++i)
            cout<<t[i];
        cout<<endl;
    }
    return 0;
}
