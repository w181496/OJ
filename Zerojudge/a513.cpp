#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

main()
{
    int t,n,m,temp,temp2;
    scanf("%d",&t);
    for(int i=1; i<=t; ++i)
    {
        printf("Case %d:\n",i);
        scanf("%d%d",&n,&m);
        priority_queue<int>que;
        for(int j=0; j<n; ++j)
        {
            scanf("%d",&temp);
            que.push(temp);
        }
        for(int j=0; j<m; ++j)
        {
            scanf("%d",&temp);
            if(temp==1)
            {
                scanf("%d",&temp2);
                que.push(temp2);
            }
            else
            {
                if(que.empty())
                {
                    printf("It's empty!\n");
                    continue;
                }
                printf("Max: %d\n",que.top());
                que.pop();
            }
        }
        if(que.empty())
        {
            printf("It's empty!\n");
        }
        else
        {
            printf("%d",que.top());
            que.pop();
            while(!que.empty())
            {
                printf(" %d",que.top());
                que.pop();
            }
            printf("\n");
        }
    }
}
