#include<cstdio>
main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        int ans=0;
        for(int j=0; j<=d-a; j+=b)
        {
            int t=1,r=(a+j)%1000000;
            for(int i=1; i<=c; ++i)
            {
                t=t*r%1000000;
            }
            ans+=t;
        }
        printf("%d\n",ans%1000000);
    }
}