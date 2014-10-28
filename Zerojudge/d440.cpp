#include <cstdio>
int euler(int x)
{
    if(x==1)
        return 0;
    int i,res=x;
    for(i=2;i*i<=x;i++)
        if(x%i==0)
        {
            res=res/i*(i-1);
            while(x%i==0)
                x/=i;
        }
    if(x>1)
        res=res/x*(x-1);
    return res;
}
main()
{
    int n;
    while(scanf("%d",&n)&&n)
        printf("%d\n",euler(n));
}
