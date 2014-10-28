#include <iostream>
#include <cstring>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r[503][503],ans=0;
        char ch;
        memset(r,0,sizeof(r));
        cin>>n>>m;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch;
                r[j+1][i+1]=(ch=='0'?0:1);
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(r[j+1][i+1]==1)
                {
                    if(r[j+1][i]==0)ans++;
                    if(r[j+1][i+2]==0)ans++;
                    if(r[j][i+1]==0)ans++;
                    if(r[j+2][i+1]==0)ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
