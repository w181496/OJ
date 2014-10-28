#include <cstdio>
#include <algorithm>
using namespace std;
main()
{
    int n,p[10];
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; ++i)p[n-i-1]=i+1;
        do
        {
            for(int i=0;i<n;++i)printf("%d",p[i]);
            puts("");
        }
        while(prev_permutation(p,p+n));
    }
}
