#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
main()
{
   int x,y,t,max=0;
   while(scanf("%d%d",&y,&x)!=EOF)
    {
        if(x==0&&y==0)break;
        vector<int>n(x),n2(x);
        for(int i=0; i<x; i++)
        {
            scanf("%d",&t);
            if(t!=2)
            {
                n[i]=1;
                max=1;
            }
            else
            {
                n[i]=0;
            }
        }
        for(int k=1; k<y; k++)
        {
            for(int j=0; j<x; j++)
            {
                scanf("%d",&t);
                if(j==0)
                {
                    if(t!=2)
                    {
                        n2[0]=1;
                        if(n2[0]>max)max=n2[0];
                    }
                    else
                    {
                        n2[0]=0;
                    }
                    continue;
                }
                if(t!=2)
                {
                    int s[3];
                    s[0]=n2[j-1];
                    s[1]=n[j];
                    s[2]=n[j-1];
                    sort(s,s+3);
                    n2[j]=s[0]+1;
                    if(n2[j]>max)max=n2[j];
                }
                else
                {
                    n2[j]=0;
                }
            }
            n=n2;
        }
        printf("%d\n",max*max);
        max=0;
    }
}