#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main() {

    ios_base::sync_with_stdio(0);
    int n,s;
    cin>>n>>s;
    int ans=-1;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        if(s*100<a*100+b)continue;
        ans=max(((100*s)-(a*100+b))%100,ans);
    }
    cout<<ans<<endl;
    return 0;
}