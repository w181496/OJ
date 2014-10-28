#include <cstdio>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int s[n*2],ans=0;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&s[i]);
            s[i+n]=s[i];
        }
        for(int i=0;i<n;++i)
        {
            int temp=s[i];
            for(int j=1;j<m;++j)
            {
                temp+=s[i+j];
            }
            if(temp>ans)ans=temp;
        }
        printf("%d\n",ans);
    }
    return 0;
}
