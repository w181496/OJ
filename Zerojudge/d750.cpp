#include<cstdio>
#include<algorithm>
using namespace std;
int m;
bool com(int a,int b)
{
    if(a%m<b%m)return true;
    else if(a%m>b%m)return false;
    else
    {
        if(a%2==1&&b%2==0)return true;
        else if(a%2==0&&b%2==1)return false;
        else
        {
            if(a%2==1&&b%2==1)return a>b;
            else return a<b;
        }
    }
}
main()
{
    int n,t[100001];
    while(scanf("%d%d",&n,&m)&&n&&m)
    {
        for(int i=0;i<n;++i)
            scanf("%d",&t[i]);
        sort(t,t+n,com);
        printf("%d %d\n",n,m);
        for(int i=0;i<n;++i)
         printf("%d\n",t[i]);
    }
    printf("0 0\n");
}
