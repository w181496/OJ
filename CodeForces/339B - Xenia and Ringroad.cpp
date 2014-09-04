#include <iostream>
using namespace std;
main()
{
    long long int n,m,t[100010];
    while(cin>>n>>m)
    {
        long long int ans=0;
        t[0]=1;
        for(int i=1;i<=m;++i){
            cin>>t[i];
            if(t[i]>t[i-1])
                ans+=t[i]-t[i-1];
            else if(t[i]<t[i-1])
                ans+=t[i]+n-t[i-1];
        }
        cout<<ans<<endl;
    }
}