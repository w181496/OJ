#include <cstdio>
int main ()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=1)
    {
        if(a==0)break;
        while(a%b)
        {
            a+=b;
            b=a-b;
            a-=b;
            b%=a;
        }
        printf("%d\n",b);
    }
    return 0;
}