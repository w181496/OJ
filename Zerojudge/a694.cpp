#include<cstdio>
#include<cstdlib>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int t[n][n];
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                scanf("%d",&t[j][i]);
        for(int k=0; k<m; ++k)
        {
            int x1,x2,y1,y2,sum=0;
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            for(int i=y1-1;i<y2;++i)
                for(int j=x1-1;j<x2;++j)
                    sum+=t[i][j];
            printf("%d\n",sum);
        }

    }
    return 0;
}
