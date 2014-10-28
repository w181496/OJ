#include<iostream>
#include<queue>
using namespace std;
struct point{int x,y;};
main()
{
    ios::sync_with_stdio(0);
    int n,x,y,nx,ny;
    char ch[100][100];
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                cin>>ch[i][j];
        cin>>x>>y;
        point start=(point){x,y},now;
        queue<point>que;
        que.push(start);
        while(!que.empty())
        {
            now=que.front();
            que.pop();
            nx=now.x;
            ny=now.y;
            ch[ny][nx]='+';
            if(ny-1>=0&&ch[ny-1][nx]=='-')
            {
                que.push((point){nx,ny-1});
            }
            if(ny+1<n&&ch[ny+1][nx]=='-')
            {
                que.push((point){nx,ny+1});
            }
            if(nx-1>=0&&ch[ny][nx-1]=='-')
            {
                que.push((point){nx-1,ny});
            }
            if(nx+1<n&&ch[ny][nx+1]=='-')
            {
                que.push((point){nx+1,ny});
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                cout<<ch[i][j];
            }
            cout<<endl;
        }
    }
}
