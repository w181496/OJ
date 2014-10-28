#include <iostream>
#include <cstring>
using namespace std;
int ans;
int arr[10][10];    //arr[x][y]儲存座標(x,y)的狀態 0關 1開
void close(int x,int y)
{
    if(x>0) arr[x-1][y]=!arr[x-1][y];
    if(x<9) arr[x+1][y]=!arr[x+1][y];
    if(y>0) arr[x][y-1]=!arr[x][y-1];
    if(y<9) arr[x][y+1]=!arr[x][y+1];
    arr[x][y]=!arr[x][y];
}
void DFS(int x,int y,int cnt)
{
    if(x==10)
    {
        x=0;
        y++;
    }
    if(y==0)
    {
        close(x,y);
        DFS(x+1,y,cnt+1);
        close(x,y);
        DFS(x+1,y,cnt);
    }
    else if(y<10)   //用十字形上面那個頭關上面那格的燈
    {
        if(arr[x][y-1]==1)
        {
            close(x,y);
            DFS(x+1,y,cnt+1);
            close(x,y);
        }
        else
        {
            DFS(x+1,y,cnt);
        }
    }
    else
    {
        for(int i=0;i<10;++i)
            if(arr[i][y-1])return; //非可行解
        if(cnt<ans)ans=cnt;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        ans = 1e10;
        //memset(arr,0,sizeof(arr));
        for(int i=0;i<10;++i)
        {
            for(int j=0;j<10;++j)
            {
                char temp;
                cin>>temp;
                if(temp=='#')arr[j][i]=0;
                else arr[j][i]=1;
            }
        }
        DFS(0,0,0);
        cout<<ans<<endl;
    }
    return 0;
}
