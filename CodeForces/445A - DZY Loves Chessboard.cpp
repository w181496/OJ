#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    char mp[110][110];
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>mp[j][i];
            if(mp[j][i]=='.')
            {
                if((j+i)%2==0)mp[j][i]='B';
                else mp[j][i]='W';
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
            cout<<mp[j][i];
        cout<<endl;
    }
    return 0;
}
