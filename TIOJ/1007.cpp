#include <iostream>
using namespace std;
unsigned long long int DFS(int,int);
unsigned long long int n,m;
unsigned long long int ans[100][100];
bool check[100][100];
void init()
{
    for(unsigned long long int i=0;i<100;++i)
    {
        for(unsigned long long int j=0;j<100;++j)
        {
             ans[i][j]=0;
             check[i][j]=false;
        }
    }
}
main()
{
    while(cin>>n>>m)
    {
        init();
        cout<<DFS(0,0)<<endl;
    }
}
unsigned long long int DFS(int num,int now)
{
    if(check[num][now])return ans[num][now];
    if(now>n)
    {
        ans[num][now]=0;
        check[num][now]=true;
        return 0;
    }
    else if(num==m)
    {
        ans[num][now]=1;
        check[num][now]=true;
        return 1;
    }
    ans[num][now]=DFS(num+1,now+1)+DFS(num+1,0);
    check[num][now]=true;
    return ans[num][now];
}