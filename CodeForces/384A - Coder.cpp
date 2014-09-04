#include<cstdio>
#include<cstdlib>
#include <cstring>
int n;
int main()
{
    while(scanf("%d",&n)==1)
    {
        int cnt=0;
        for(int i=1;i<=n;++i)
            for(int j=1;j<=n;++j)
                if((j-i)%2==0)cnt++;
        printf("%d\n",cnt);
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=n;++j)
            {
                if((j-i)%2!=0)printf(".");
                else printf("C");
            }
            puts("");
        }
    }
    return 0;
}