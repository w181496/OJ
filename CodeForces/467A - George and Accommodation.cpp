#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, a, b, ans=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        if(b-a>=2)ans++;
    }
    cout<<ans<<endl;
    return 0;
}