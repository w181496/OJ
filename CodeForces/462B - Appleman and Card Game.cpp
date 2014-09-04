#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n,m,ans=0;
    LL c[27]={};
    string s;
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<n;++i)
        c[s[i]-'A']++;
    sort(c,c+27);
    for(int i=26;i>=0 && m;--i){
        if(m>=c[i])
        {
            m-=c[i];
            ans+=c[i]*c[i];
        }
        else
        {
            ans+=m*m;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}