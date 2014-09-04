#include<cstdio>
main()
{
    int n,f[46];
    f[0]=f[1]=1;
    for(int i=2;i<46;++i)
        f[i]=f[i-1]+f[i-2];
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",f[n]);
}