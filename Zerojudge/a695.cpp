#include <cstdio>
#include <cmath>
main()
{
    int n;
    scanf("%d", &n);
    for (int i=2,k=sqrt(n); i<=k; ++i)
        if (n%i==0)
        {
            printf("%d\n",n/i);
            break;
        }
}
