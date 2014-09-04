#include <cstdio>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int t[n*n+1];
        int ans[n];
        int now=1;
        for(int i=0; i<=n*n; ++i)t[i]=i;
        while(now<=n*n/2)
        {
            for(int i=0; i<n; ++i)
            {
                if(i<n/2)ans[i]=now,now++;
                else ans[i]=n*n-ans[n-i-1]+1;
            }
            printf("%d",ans[0]);
            for(int i=1; i<n; ++i)
                printf(" %d",ans[i]);
            puts("");
        }
    }
    return 0;
}