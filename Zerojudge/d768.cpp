#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d",&n)&&n!=0)
    {
        scanf("%d",&m);
        vector<vector<int> >e(n);
        int a,b;
        for(int i=0;i<m;++i)
        {
            scanf("%d%d",&a,&b);
            e[a].push_back(b);
            e[b].push_back(a);
        }
        queue<int>que;
        int visit[n];
        int flag=0;
        for(int i=0;i<n;++i)visit[i]=0;
        for(int i=0;i<e.size();++i)
        {
            if(visit[i]==0)
            {
                visit[i]=1;
                que.push(i);
                while(!que.empty())
                {
                    int vi=que.front();
                    que.pop();
                    for(int j=0;j<e[vi].size();++j)
                    {
                        if(visit[e[vi][j]]==0)
                        {
                            int x=0,y=0;
                            for(int k=0;k<e[e[vi][j]].size();++k)
                            {
                                if(visit[e[e[vi][j]][k]]==1)
                                    x=1;
                                else if(visit[e[e[vi][j]][k]]==2)
                                    y=1;
                            }
                            if(x==1&&y==1)
                            {
                                flag=1;
                                break;
                            }
                            else if(x==1&&y==0)
                            {
                                visit[e[vi][j]]=2;
                            }
                            else
                            {
                                visit[e[vi][j]]=1;
                            }
                            que.push(e[vi][j]);
                        }
                    }
                }
            }
        }
        if(flag==1)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }
    return 0;
}
