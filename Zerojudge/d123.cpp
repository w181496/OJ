#include <cstdio>
#include <cmath>
main()
{
    int t;
    int time=1;
    while(scanf("%d",&t)!=EOF)
    {
        bool c[10000];
        for(int i=0;i<10000;++i)c[i]=true;
        int n[t];
        for(int i=0;i<t;++i)
        {
            scanf("%d",&n[i]);
        }
        int flag=1;
        printf("Case #%d: It is ",time);
        time++;
        for(int i=0;i<t&&flag==1;++i)
        {
            for(int j=i+1;j<t&&flag==1;++j)
            {
                if(n[i]>n[j]&&c[n[i]-n[j]]!=true)
                {
                    printf("not a B2-Sequence.\n");
                    flag=0;
                }
                else if(n[i]<=n[j]&&c[n[j]-n[i]]!=true)
                {
                    printf("not a B2-Sequence.\n");
                    flag=0;
                }
                else
                {
                    if(n[i]>n[j])c[n[i]-n[j]]=false;
                    else c[n[j]-n[i]]=false;
                }
            }
        }
        if(flag==1)
        {
            printf("a B2-Sequence.\n");
        }
    }
}
