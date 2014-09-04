#include<cstring>
#include<cstdio>
main()
{
    char p[1001],q[1001];
    while(scanf("%s%s",p,q)!=EOF)
    {
        int r=0;
        int flag=0;
        for(int i=0;i<strlen(q);++i)
        {
            if(q[i]==p[r])
            {
                r++;
                flag=1;
            }
            else if(flag==1)
            {
                flag=0;
                r--;
            }
        }
        printf("%d\n",r);
    }
}