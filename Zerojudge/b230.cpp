#include <cstdio>
#include <cstring>
main()
{
    bool t[2000];
    memset(t,1,2000);
        for(int x=1;;++x)
        {
            if(x>24)break;
            for(int y=x+1;;++y)
            {
                if(x*y+y*(y+1)+x*(y+1)>1999)break;
                for(int z=y+1;;++z)
                {
                    if(x*y+y*z+x*z>1999)break;
                    if(x==y||y==z||x==z)continue;
                    t[x*y+y*z+x*z]=false;
                }
            }
        }
    int k;
    int ans[66];
    for(int i=1,j=1;j<=65;++i)
    {
        if(t[i])ans[j]=i,j++;
    }
    while(scanf("%d",&k)!=EOF)
        printf("%d\n",ans[k]);
}
