#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    while(n--)
    {
        int r,t[501],ans=0,tmp;
        cin>>r;
        for(int i=0;i<r;++i)
        {
            cin>>t[i];
        }
        sort(t,t+r);
        tmp=t[r/2];
        for(int i=0;i<r;++i)
            ans+=(tmp>t[i])?(tmp-t[i]):(t[i]-tmp);
        cout<<ans<<endl;
    }
    return 0;
}
