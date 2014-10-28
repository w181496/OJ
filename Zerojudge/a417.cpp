#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
//模擬
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=1,y=0,n,r,n_x=0,n_y=0,c=0;
        scanf("%d%d",&n,&r);
        int s[n][n];
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                s[i][j]=0;
        if(r==1)
        {
            x=1;
            y=0;
        }
        else
        {
            x=-1;
            y=0;
        }
        while(1) //x=1向右 x=-1向左 y=1向上 y=-1向下
        {
            bool b=1;
            for(int i=0;i<n&&b;++i)
            {
                for(int j=0;j<n;++j)
                {
                    if(s[i][j]==0)
                    {
                        b=0;
                        break;
                    }
                }
            }
            if(b!=0)break;
            c++;
            if(r==1)
            {
                if(x==1&&n_x<n-1&&s[n_x+1][n_y]==0)
                {
                    s[n_x][n_y]=c;
                    n_x++;
                    continue;
                }
                else if(x==1)
                {
                    x=0;
                    y=-1;
                    s[n_x][n_y]=c;
                    n_y++;
                    continue;
                }

                if(x==-1&&n_x>0&&s[n_x-1][n_y]==0)
                {
                    s[n_x][n_y]=c;
                    n_x--;
                    continue;
                }
                else if(x==-1)
                {
                    x=0;
                    y=1;
                    s[n_x][n_y]=c;
                    n_y--;
                    continue;
                }

                if(y==1&&n_y>0&&s[n_x][n_y-1]==0)
                {
                    s[n_x][n_y]=c;
                    n_y--;
                    continue;
                }
                else if(y==1)
                {
                    y=0;
                    x=1;
                    s[n_x][n_y]=c;
                    n_x++;
                    continue;
                }
                //cout<<s[n_x][n_y]<<endl;
               // cout<<s[n_x][n_y+1]<<endl;
                if(y==-1&&n_y<n-1&&s[n_x][n_y+1]==0)
                {
                    s[n_x][n_y]=c;
                    n_y++;
                    continue;
                }
                else if(y==-1)
                {
                    y=0;
                    x=-1;
                    s[n_x][n_y]=c;
                    n_x--;
                    continue;
                }
            }
            else
            {
                if(x==1&&n_x<n-1&&s[n_x+1][n_y]==0)
                {
                    s[n_x][n_y]=c;
                    n_x++;
                    continue;
                }
                else if(x==1)
                {
                    x=0;
                    y=1;
                    s[n_x][n_y]=c;
                    n_y--;
                    continue;
                }

                if(x==-1&&n_x>0&&s[n_x-1][n_y]==0)
                {
                    s[n_x][n_y]=c;
                    n_x--;
                    continue;
                }
                else if(x==-1)
                {
                    x=0;
                    y=-1;
                    s[n_x][n_y]=c;
                    n_y++;
                    continue;
                }

                if(y==1&&n_y>0&&s[n_x][n_y-1]==0)
                {
                    s[n_x][n_y]=c;
                    n_y--;
                    continue;
                }
                else if(y==1)
                {
                    y=0;
                    x=-1;
                    s[n_x][n_y]=c;
                    n_x--;
                    continue;
                }

                if(y==-1&&n_y<n-1&&s[n_x][n_y+1]==0)
                {
                    s[n_x][n_y]=c;
                    n_y++;
                    continue;
                }
                else if(y==-1)
                {
                    y=0;
                    x=1;
                    s[n_x][n_y]=c;
                    n_x++;
                    continue;
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                printf("%5d",s[j][i]);

            }
            printf("\n");
        }
    }
    return 0;
}
