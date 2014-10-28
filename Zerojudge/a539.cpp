#include <cstdio>
main()
{
    int n,ans;
    int t[1001];
    while(scanf("%d",&n)==1)
    {
        ans=0;
        for(int i=0;i<n;++i)
            scanf("%d",&t[i]);
        for(int i=0;i<n;++i)
            for(int j=n-1;j>i;j--)
                if(t[j-1]>t[j])
                {
                    int temp=t[j-1];
                    t[j-1]=t[j];
                    t[j]=temp;
                    ans++;
                }
        printf("Minimum exchange operations : %d\n",ans);
    }
}
