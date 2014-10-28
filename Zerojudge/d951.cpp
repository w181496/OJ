#include <cstdio>
using namespace std;
int main()
{
    int N,X,Y,M,t;
    int a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&N,&X,&Y,&M);
        b=(M*X-N)/(X-Y);
        a=M-b;
        printf("%d %d\n",a,b);
    }
    return 0;
}
