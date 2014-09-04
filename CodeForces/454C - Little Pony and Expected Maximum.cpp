#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    double ans=0.0,btm;
    cin>>n>>m;
    btm=pow(n,m);
    for(int i=1;i<=n;++i)
        ans+=(pow((double)i/n,m)-pow((double)(i-1)/n,m))*i;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}