#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    int n,t[100001];
    while(cin>>n)
    {
        int ans=0;
        for(int i=0;i<n;++i)
        {
            cin>>t[i];
            if(t[i]==i)ans++;
        }
        bool chk=false;
        for(int i=0;i<n;++i)
        {
            if(t[t[i]]==i&&t[i]!=i){ans+=2;chk=true;break;}
        }
        if(!chk&&ans!=n)ans++;
        cout<<ans<<endl;
    }
}