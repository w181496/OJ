#include <iostream>
#include <queue>
using namespace std;

int main()
{
    char ch;
    int x,y,z;
    int first,end,t=0,next,last,tt=0;
    while(cin>>z>>y>>x)
    {
        if(z==0&&y==0&&x==0)break;
        t=0;tt=0;
        int n[x*y*z];
        for(int i=0; i<x*y*z; ++i)
        {
            cin>>ch;
            if(ch=='S')
            {
                first=i;
                n[t]=-2;
            }
            else if(ch=='E')
            {
                end=i;
                n[t]=-2;
            }
            else if(ch=='#')
            {
                n[t]=-1;
            }
            else if(ch=='.')
            {
                n[t]=-2;
            }
            t++;
        }
        queue<int>que;
        que.push(first);
        n[first]=-3;
        while(!que.empty())
        {
            next=que.front();
            que.pop();
            if(next==end)
            {
                break;
            }
            if((next-x)/(x*y)==next/(x*y)&&n[next-x]==-2&&(next-x)%(x*y)/x>=0)
            {
                que.push(next-x);
                n[next-x]=next;
            }
            if(next+1<x*y*z&&n[next+1]==-2&&(next+1)%(x*y)%x>next%(x*y)%x)
            {
                que.push(next+1);
                n[next+1]=next;
            }
            if((next+x)/(x*y)==next/(x*y)&&n[next+x]==-2&&(next+x)%(x*y)/x<y)
            {
                que.push(next+x);
                n[next+x]=next;
            }
            if(next-1>=0&&n[next-1]==-2&&(next-1)%(x*y)%x<next%(x*y)%x)
            {
                que.push(next-1);
                n[next-1]=next;
            }
            if(next+x*y<x*y*z&&n[next+x*y]==-2&&(next+x*y)/x/y<z)
            {
                que.push(next+x*y);
                n[next+x*y]=next;
                //tt++;
            }
            if(next-x*y>=0&&n[next-x*y]==-2&&(next-x*y)/x/y>=0)
            {
                que.push(next-x*y);
                n[next-x*y]=next;
                //tt++;
            }
        }
        if(next==end)
        {
            while(next!=first)
            {
                last=next;
                next=n[next];
                n[last]=-3;
                tt++;
            }
            n[next]=-3;
        }
        else
        {
            cout<<"Trapped!"<<endl;
            continue;
        }
        cout<<"Escaped in "<<tt<<" minute(s)."<<endl;
    }
    return 0;
}
