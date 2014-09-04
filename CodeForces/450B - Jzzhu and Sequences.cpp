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
    long long int x, y, n, ans;
    cin>>x>>y>>n;
    if(n%6==1)ans=x;
    else if(n%6==2)ans=y;
    else if(n%6==3)ans=y-x;
    else if(n%6==4)ans=-x;
    else if(n%6==5)ans=-y;
    else ans=x-y;
    ans%=1000000007;
    ans+=1000000007;
    cout<<ans%1000000007<<endl;
    return 0;
}