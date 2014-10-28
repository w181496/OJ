#include<iostream>
#include<cstdio>
using namespace std;
const int N(10008),M(108),MODN=20123;
int a[N][M],f[N][M],sum[N]={0};
int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    for (i=1;i<=n;i++)
        for (j=0;j<m;j++)
        {
            scanf("%d%d",&f[i][j],&a[i][j]);
            if (f[i][j]) sum[i]++;
        }
    int ans=0;
    scanf("%d",&j);
    for (i=1;i<=n;i++)
    {
        ans=(ans+a[i][j])%MODN;
        a[i][j]%=sum[i];
        if (a[i][j]==0) a[i][j]=sum[i];
        for (k=a[i][j];k>0;)
        {
            if (f[i][j])
                k--;
            if (k>0) j=(j+1)%m;
        }
    }
    printf("%d\n",ans);
    return 0;
}
