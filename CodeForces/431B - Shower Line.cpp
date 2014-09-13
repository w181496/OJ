#include <iostream>
using namespace std;
typedef long long LL;
LL t[6], mp[6][6], ans;
bool chk()
{
    bool tmp[6];
    for(int i=1;i<=5;++i)tmp[i]=false;
    for(int i=0;i<5;++i)
    {
        if(tmp[t[i]]==true)return false;
        else tmp[t[i]]=true;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    t[0]=5,t[1]=4,t[2]=3,t[3]=2,t[4]=1,t[5]=0;
    for(int i=1;i<=5;++i)
        for(int j=1;j<=5;++j)
            cin>>mp[j][i];
    ans=-1;
    while(true)
    {
        for(int i=0;i<5;++i)
        {
            if(t[i]>5)
            {
                t[i]=1;
                t[i+1]++;
            }
        }
        if(chk())
        {
            ans=max(ans,mp[t[0]][t[1]]+mp[t[1]][t[0]]+2*(mp[t[2]][t[3]]+mp[t[3]][t[2]])+mp[t[2]][t[1]]+mp[t[1]][t[2]]+2*(mp[t[3]][t[4]]+mp[t[4]][t[3]]));
        }
        if(t[0]==1&&t[1]==2&&t[2]==3&&t[3]==4&&t[4]==5)break;
        t[0]++;
    }
    cout<<ans<<endl;
    return 0;
}
