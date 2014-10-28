#include <cstdio>
main()
{
    int x,N;
    while(scanf("%d",&N)&&N!=0)
    {
        int A[N];
        x=0;
        for(int i=0;i<N;++i)scanf("%d",&A[i]);
        for(int i=0; i<N; ++i)x^=A[i];
        if(x!=0)puts("Yes");
        else puts("No");
    }
}
