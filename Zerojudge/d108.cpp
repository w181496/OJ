#include <cstdio>
main()
{
    int n;
    int ans[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,9,6,9,29,39,38,65,88,128};
    while(scanf("%d",&n)==1)
        printf("%d\n",ans[n]);
}
