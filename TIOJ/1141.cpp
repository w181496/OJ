#include<cstdio>
#include<queue>
using namespace std;
main()
{
    int n,t;
    while(scanf("%d",&n)!=EOF)
    {
        int sum=0;
        priority_queue<int>que;
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&t);
            que.push(t);
        }
        int a,b;
        a=que.top();
        que.pop();
        for(int i=1;i<=n;++i)
        {
            b=que.top();
            que.pop();
            sum+=(a-b)*(a-b);
            a=b;
        }
        sum+=a*a;
        printf("%d\n",sum);
    }
}