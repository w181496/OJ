#include <cstdio>
main()
{
    int n,e,f,c;
    scanf("%d",&n);
    for(int i=0; i<n; ++i)
    {
        scanf("%d%d%d",&e,&f,&c);
        int m=e+f,t,ans=0;
        while(m>=c)
        {
            t=m/c;
            ans+=t;
            m=t+m%c;
        }
        printf("%d\n",ans);
    }
}
