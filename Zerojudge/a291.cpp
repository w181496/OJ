#include <cstdio>
main()
{
    int n;
    int t[4];
    while(scanf("%d%d%d%d",&t[0],&t[1],&t[2],&t[3])!=EOF)
    {
        int x[4];
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            int A=0,B=0;
            int c[4]={1,1,1,1};
            scanf("%d%d%d%d",&x[0],&x[1],&x[2],&x[3]);
            bool chk[4]={false,false,false,false};
            if(x[0]==t[0]){c[0]=0;A++;}
            if(x[1]==t[1]){c[1]=0;A++;}
            if(x[2]==t[2]){c[2]=0;A++;}
            if(x[3]==t[3]){c[3]=0;A++;}
            for(int m=0;m<4;++m)
            {
                if(c[m]==0)continue;
                for(int n=0;n<4;++n)
                {
                    if(c[n]==0)continue;
                    if(t[m]==x[n]&&!chk[m])
                    {
                        B++,chk[m]=true;
                        x[n]=-1;
                    }
                }
            }
            printf("%dA%dB\n",A,B);
        }
    }
}
