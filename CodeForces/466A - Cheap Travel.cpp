#include <iostream>
using namespace std;
typedef long long LL;
LL n, arr[500010], s[500010], ans=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(i==0)s[i]=arr[i];
        else s[i]=s[i-1]+arr[i];
    }
    int avg=s[n-1]/3;
    if(s[n-1]%3!=0)
        cout<<0<<endl;
    else{
        for(int i=0,n1=0;i<n-1;++i)
        {
            if(s[i]==avg*2)ans+=n1;
            if(s[i]==avg)n1++;
        }
        cout<<ans<<endl;
    }
    return 0;
}