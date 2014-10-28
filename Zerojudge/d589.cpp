#include <iostream>
#include <cstring>
using namespace std;
int  main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,tmp,v[101],w[101][101],d[101];
        memset(w,1000,sizeof(w));
        for(int i=0;i<101;++i)
        {
            v[i]=0;
            d[i]=1000;
            for(int j=0;j<101;++j)
            {
                w[i][j]=1000;
            }
        }
        cin>>n>>m;
        for(int i=0;i<m;++i)
        {
            cin>>x>>y>>tmp;
            w[x-1][y-1]=tmp;
            w[y-1][x-1]=tmp;
        }
        d[0]=1000;
        /* ???*/
        for(int i=1;i<n;++i)
            d[i]=w[0][i];
        /*     */
        for(int i=0;i<n;++i)
        {
            int mn=1000,num,flag=1;
            for(int j=0;j<n;++j)
            {
                if(!v[j]&&d[j]<=mn)
                {
                    mn=d[j];
                    num=j;
                    flag=0;
                }
            }
            if(flag)break;
            v[num]=1;
            for(int j=0;j<n;++j)
            {
                if(!v[j])
                d[j]=min(d[j],max(w[num][j],d[num]));
            }
        }
        cout<<d[n-1]<<endl;
    }
    return 0;
}
