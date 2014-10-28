//code by  leopan0922
#include<iostream>
#include<cstdio>
int n,w,map[9][9],flag=0,dx[100],dy[100],count;
bool check(int x,int y,int k)
{
    int x1=x/n*n,y1=y/n*n;
    for(int i=y1; i<y1+n; i++)
    {
        for(int j=x1; j<x1+n; j++)
        {
            if(j==x&&i==y)
                continue;
            if(k==map[j][i])
                return 0;
        }
    }
    for(int i=0; i<w; i++)
    {
        if(i!=x&&k==map[i][y])
            return 0;
        if(i!=y&&k==map[x][i])
            return 0;
    }
    return 1;
}
void dfs(int now)
{
    if(now==count)
    {
        flag=1;
        for(int i=0; i<w; i++)
        {
            for(int a=0; a<w; a++)
                printf("%d ",map[a][i]);
            printf("\n");
        }
        return;
    }
    for(int i=1; i<=w; i++)
    {
        if(check(dx[now],dy[now],i))
            map[dx[now]][dy[now]]=i,dfs(now+1),map[dx[now]][dy[now]]=0;
    }
    return;
}
int main()
{
    while(scanf("%d",&n)==1)
    {
        count=0;
        flag=0;
        w=n*n;
        for(int i=0; i<w; i++)
            for(int j=0; j<w; j++)
            {
                scanf("%d",&map[j][i]);
                if(map[j][i]==0)
                    dx[count]=j,dy[count]=i,count++;
            }
        for(int i=0; i<w; i++)
        {
            for(int j=0; j<w; j++)
                if(check(j,i,map[j][i])==0&&map[j][i]!=0)
                {
                    flag=1;
                    break;
                }
            if(flag)
                break;
        }
        if(flag)
        {
            printf("Illegal.\n");
            continue;
        }
        dfs(0);
        if(flag==0)
            printf("NO SOLUTION\n");
    }
}
