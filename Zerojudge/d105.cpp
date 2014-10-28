#include <cstdio>
#include <cstring>
main()
{
    int a[31][30]= {0};
    int i,j;
    int n,m;
    scanf("%d %d",&n,&m);
    a[0][0]=1;
    for(i=1; i<=30; i++)
    {
        a[i][0]=a[i-1][1]+a[i-1][n-1];
        a[i][n-1]=a[i-1][0]+a[i-1][n-2];
        for(j=1; j<n-1; j++)  a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    }
    printf("%d",a[m][0]);
}
