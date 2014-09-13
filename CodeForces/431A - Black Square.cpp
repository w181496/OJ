#include <iostream>
#include <string>
using namespace std;
typedef long long LL;
LL t[4], ans;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    ans=0;
    for(int i=0;i<4;++i)cin>>t[i];
    cin>>s;
    for(size_t i=0;i<s.size();++i)
        ans+=t[s[i]-'0'-1];
    cout<<ans<<endl;
    return 0;
}
