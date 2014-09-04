#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    char mp[110][110];
    cin>>n;
    memset(mp,'*',sizeof(mp));
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            cin>>mp[j][i];
    bool flag = true;
    for(int i=1;i<=n && flag;++i)
    {
        int cnt=0;
        for(int j=1;j<=n;++j)
        {
            if(mp[j-1][i]=='o')cnt++;
            if(mp[j+1][i]=='o')cnt++;
            if(mp[j][i-1]=='o')cnt++;
            if(mp[j][i+1]=='o')cnt++;
            if(cnt%2!=0)
            {
                flag = false;
                break;
            }
        }
    }
    puts(flag?"YES":"NO");
    return 0;
}