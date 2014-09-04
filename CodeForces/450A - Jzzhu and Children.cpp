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
    int n,m,tmp,mx=0,ans;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        if(tmp%m==0&&tmp/m>=mx)
        {
            ans=i+1;
            mx=tmp/m;
        }
        else if(tmp%m!=0&&tmp/m+1>=mx)
        {
            ans=i+1;
            mx=tmp/m+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}