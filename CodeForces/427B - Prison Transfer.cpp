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
    LL n, t, c, a, tmp, id=1, ans;
    ans=a=0;
    cin>>n>>t>>c;
    for(LL i=0;i<n;++i)
    {
        cin>>tmp;
        if(tmp>t)a=0;
        else a++;
        if(a>=c)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
