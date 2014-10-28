#include <cstdio>
main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
        if(a==0||(b!=0&&a%b==0))puts("Ok!");
        else puts("Impossib1e!");
}
