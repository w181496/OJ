#include<iostream>
#include<vector>
#include<iomanip>
#include<map>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n, m, k, ans;
    while(cin>>n>>m>>k)
    {
        ans=0;
        if(n+m-2<k)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(n>k)
                ans=n/(k+1)*m;
            else
                ans=m/(k-n+2);
            if(m>k)
                ans=max(m/(k+1)*n,ans);
            else
                ans=max(n/(k-m+2),ans);
            cout<<ans<<endl;
        }
    }
    return 0;
}