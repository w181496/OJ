#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    char mp[30][15];
    for(int i=0;i<15;++i)
    {
        for(int j=0;j<30;++j)
        {
            char ch;
            cin>>ch;
            mp[j][i]=ch;
        }
    }
    for(int i=0;i<15;++i)
    {
        for(int j=0;j<30;++j)
        {
            int cnt=0;
            if(mp[j][i]=='*')continue;
            if(i-1>=0&&mp[j][i-1]=='*')cnt++;
            if(i+1<15&&mp[j][i+1]=='*')cnt++;
            if(j-1>=0&&mp[j-1][i]=='*')cnt++;
            if(j+1<30&&mp[j+1][i]=='*')cnt++;
            if(j-1>=0&&i-1>=0&&mp[j-1][i-1]=='*')cnt++;
            if(j+1<30&&i-1>=0&&mp[j+1][i-1]=='*')cnt++;
            if(j-1>=0&&i+1<15&&mp[j-1][i+1]=='*')cnt++;
            if(j+1<30&&i+1<15&&mp[j+1][i+1]=='*')cnt++;
            if(cnt>0)mp[j][i]=(char)('0'+cnt);
        }
    }
    for(int i=0;i<15;++i)
    {
        for(int j=0;j<30;++j)
        {
            cout<<mp[j][i];
        }
        cout<<endl;
    }
    return 0;
}
