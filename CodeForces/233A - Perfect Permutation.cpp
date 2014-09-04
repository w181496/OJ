#include <cstdio>
main() {
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n%2==1){puts("-1");continue;}
        int a=4,b=3;
        printf("2 1");
        for(int i=2;i<=n/2;++i)
        {
            printf(" %d %d",a,b);
            a+=2;
            b+=2;
        }
        printf("\n");
    }
}