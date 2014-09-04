#include<cstdio>
#include<algorithm>
using namespace std;
int f(int,int);
int s[1001];
int dp[1000][1000];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<1000; ++i)
            for(int j=0; j<1000; ++j)
                dp[i][j]=-1;
        int sum=0,ans_a,ans_b;
        for(int i=0; i<n; ++i)
            scanf("%d",&s[i]),sum+=s[i];
        ans_a=f(0,n-1);
        ans_b=sum-ans_a;
        printf("%d %d\n",ans_a,ans_b);
    }
    return 0;
}
int f(int p,int q)
{
    if(p==q)
    {
        return s[p];
    }
    else if(q-p==1)
    {
        if(s[p]>s[q])return s[p];
        else return s[q];
    }
    else
    {
        if(dp[p][q]==-1)
            dp[p][q]=max(min(f(p+2,q),f(p+1,q-1))+s[p],min(f(p+1,q-1),f(p,q-2))+s[q]);
        return dp[p][q];
    }
}