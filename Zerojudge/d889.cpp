#include <cstdio>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int t,s=0;
        int ans=0;
        bool flag=true;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&t);
            if(t<s)
            {
                s+=5;
            }
            else if(s+29<t)
            {
                flag=false;
                ans=s+30;
            }
            else
            {
                s=t+5;
            }
        }
        if(flag)printf("%d\n",s+30);
        else printf("%d\n",ans);
    }
    return 0;
}
