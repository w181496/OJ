#include <iostream>
#include <stack>
using namespace std;
struct Point
{
    int x,y;
};
char t[1000][1000];
main()
{
    ios::sync_with_stdio(0);
    int x,y;
    while(cin>>y>>x&&x&&y)
    {
        int ans=0,i,j;
        stack<Point>que;
        for(i=0; i<y; ++i)
            for(j=0; j<x; ++j)
                cin>>t[j][i];
        for(i=0; i<y; ++i)
        {
            for(j=0; j<x; ++j)
            {
                if(t[j][i]=='1')
                {
                    ans++;
                    que.push((Point){j,i});
                    while(!que.empty())
                    {
                        Point temp=que.top();
                        que.pop();
                        int nx=temp.x,ny=temp.y;
                        t[nx][ny]='0';
                        if(ny>0&&t[nx][ny-1]=='1')que.push((Point){nx,ny-1});
                        if(ny<y-1&&t[nx][ny+1]=='1')que.push((Point){nx,ny+1});
                        if(nx>0&&t[nx-1][ny]=='1')que.push((Point){nx-1,ny});
                        if(nx<x-1&&t[nx+1][ny]=='1')que.push((Point){nx+1,ny});
                        if(nx>0&&ny>0&&t[nx-1][ny-1]=='1')que.push((Point){nx-1,ny-1});
                        if(nx<x-1&&ny>0&&t[nx+1][ny-1]=='1')que.push((Point){nx+1,ny-1});
                        if(nx>0&&ny<y-1&&t[nx-1][ny+1]=='1')que.push((Point){nx-1,ny+1});
                        if(nx<x-1&&ny<y-1&&t[nx+1][ny+1]=='1')que.push((Point){nx+1,ny+1});
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
}
