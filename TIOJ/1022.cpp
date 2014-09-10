//WTF
//G_G
//NO MLE ,NO AC
#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;
#define INF 999999
int k, m, n, now, h[101][101], dis[101][101];
queue<int>que;
int main()
{
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&m,&n);
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                scanf("%d",&h[j][i]);
        now=0;
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                dis[j][i]=INF;
        dis[0][0]=0;
        que.push(now);
        while(!que.empty())
        {
            now=que.front();
            que.pop();
            int x=now%n, y=now/n;
            if(x>0 && abs(h[x][y]-h[x-1][y])<=5)
                if(dis[x-1][y]>dis[x][y]+1){
                    que.push(y*n+(x-1));
                    dis[x-1][y]=dis[x][y]+1;
                }
            if(x<n-1 && abs(h[x][y]-h[x+1][y])<=5)
                if(dis[x+1][y]>dis[x][y]+1){
                    que.push(y*n+(x+1));
                    dis[x+1][y]=dis[x][y]+1;
                }
            if(y>0 && abs(h[x][y]-h[x][y-1])<=5)
                if(dis[x][y-1]>dis[x][y]+1){
                    que.push((y-1)*n+x);
                    dis[x][y-1]=dis[x][y]+1;
                }
            if(y<m-1 && abs(h[x][y]-h[x][y+1])<=5)
                if(dis[x][y+1]>dis[x][y]+1){
                    que.push((y+1)*n+x);
                    dis[x][y+1]=dis[x][y]+1;
                }
        }
        printf("%d\n",dis[n-1][m-1]);
    }
    return 0;
}
