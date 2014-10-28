#include <cstdio>
int main()
{
    int n,a,b,c;
    while(scanf("%d",&n)!=EOF)
    {
        int p[20][20],p2[20][20];
        for(int i=0;i<20;++i)
            for(int j=0;j<20;++j)
                p[j][i]=-1,p2[j][i]=-1;
        for(int i=0;i<n;++i)
        {
            scanf("%d%d%d",&a,&b,&c);
            p[b][a]=c;
        }
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            scanf("%d%d%d",&a,&b,&c);
            p2[b][a]=c;
        }
        int sum=0;
        for(int i=1;i<=19;++i)
        {
            for(int j=1;j<=19;++j)
            {
                if(p[j][i]!=-1)
                {
                    if(p2[j][i]!=p[j][i]&&p2[j][i]!=-1)
                    {
                        sum+=2;
                    }
                    else if(p2[j][i]==-1)
                    {
                        sum+=1;
                    }
                }
                else
                {
                    if(p2[j][i]!=-1)
                    {
                        sum++;
                    }
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
