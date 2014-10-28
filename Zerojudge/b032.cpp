#include <cstdio>

main()
{
    int n,x1,x2,z1,y1,y2,z2;
    while(scanf("%d",&n)&&n!=0)
    {
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        int count=0;
        if(x1>=0)
        {
            if(x2>=0&&(x1==x2||x1==n-x2))
            {
                count++;
                x1=x2=-1;
            }
            else if(y2>=0&&(x1==y2||x1==n-y2))
            {
                count++;
                x1=y2=-1;
            }
            else if(z2>=0&&(x1==z2||x1==n-z2))
            {
                count++;
                x1=z2=-1;
            }
        }
        if(y1>=0)
        {
            if(x2>=0&&(y1==x2||y1==n-x2))
            {
                count++;
                y1=x2=-1;
            }
            else if(y2>=0&&(y1==y2||y1==n-y2))
            {
                count++;
                y1=y2=-1;
            }
            else if(z2>=0&&(y1==z2||y1==n-z2))
            {
                count++;
                y1=z2=-1;
            }
        }
        if(z1>=0)
        {
            if(x2>=0&&(z1==x2||z1==n-x2))
            {
                count++;
                z1=x2=-1;
            }
            else if(y2>=0&&(z1==y2||z1==n-y2))
            {
                count++;
                z1=y2=-1;
            }
            else if(z2>=0&&(z1==z2||z1==n-z2))
            {
                count++;
                z1=z2=-1;
            }
        }
        if(count==3)puts("Yes");
        else puts("No");    }
}
