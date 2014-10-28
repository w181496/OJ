#include <cstdio>
int GCD(int,int);
int main()
{
    int ans[501];
    for(int n=1; n<=500; ++n)
    {
        int G=0;
        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
            {
                G+=GCD(i,j);
            }
        ans[n]=G;
    }
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)break;
        printf("%d\n",ans[num]);
    }
    return 0;
}
int GCD(int i,int j)
{
    if(j>i)
    {
        i+=j;
        j=i-j;
        i-=j;
    }
    int r;
    while(i%j>0)
    {
        r=i%j;
        i=j;
        j=r;
    }
    return j;
}
