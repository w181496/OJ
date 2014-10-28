#include<cstdio>
#include<map>
using namespace std;
main()
{
    int n,m,temp;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i)
    {
        map<int,int>t;
        int ans=0;
        for(int j=0;j<m;++j)
        {
            scanf("%d",&temp);
            t[temp]++;
        }
        for(int j=0;j<m;++j)
        {
            scanf("%d",&temp);
            if(t[temp]>0)ans++;
        }
        printf("%d\n",ans);
    }
}
