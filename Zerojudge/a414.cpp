#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        int count=0;
        if(n==0)break;
        if(!(n&1))
        {
            printf("0\n");
        }
        else
        {
            while(n%2)
            {
                count++;
                n/=2;
            }
            printf("%d\n",count);
        }
    }
}
