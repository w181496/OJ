#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int t[n];
        for(int i=0;i<n;++i)
            cin>>t[i];
        int c=0,p=0;
        sort(t,t+n);
        for(int i=n-1;i>=0;--i)
        {
            c+=t[i];
            p++;
            if(c<m)
            {
                continue;
            }
            else
            {
                cout<<p<<endl;
                break;
            }
        }
        if(c<m)cout<<"OAQ"<<endl;
    }
    return 0;
}
