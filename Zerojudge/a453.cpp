#include<cstdio>
#include<cmath>
main()
{
    int t,a,b,c;
    while(scanf("%d",&t)!=EOF)
        for(int i=1;i<=t;++i)
        {
            scanf("%d%d%d",&a,&b,&c);
            int temp=b*b-4*a*c;
            ((int)sqrt(temp*1.0))*sqrt(temp*1.0)==temp?printf("Yes\n"): printf("No\n");
        }
}
