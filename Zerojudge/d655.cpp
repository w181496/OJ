#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t,n;
    int price[10]={1,5,10,30,50,70,100,110,500,1000};
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        int r=0;
        scanf("%d",&n);
        if(n>1000)
        {
            r+=n/1000;
            n%=1000;
        }
        int c[1001];
        memset(c, 0x7f, sizeof(c));
        c[0] = 0;
        for (int i = 0; i < 10; ++i)
            for (int j = price[i]; j <= n; ++j)
                c[j] = min(c[j], c[j-price[i]] + 1);
        printf("%d\n",c[n]+r);
    }
    return 0;
}
