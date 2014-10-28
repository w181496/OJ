#include <cstdio>
main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int t[n];
        for(int i=0;i<n;++i)
            scanf("%d",&t[i]);
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(t[i]%10>t[j]%10)
                {
                    t[i]+=t[j];
                    t[j]=t[i]-t[j];
                    t[i]-=t[j];
                }
                else if(t[i]%10==t[j]%10)
                {
                    if(t[i]<t[j])
                    {
                        t[i]+=t[j];
                        t[j]=t[i]-t[j];
                        t[i]-=t[j];
                    }
                }
            }
        }
        printf("%d",t[0]);
        for(int i=1;i<n;++i)
            printf(" %d",t[i]);
        printf("\n");
    }
}
