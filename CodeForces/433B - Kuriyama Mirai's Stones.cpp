#include <algorithm>
#include <iostream>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n, m, type, l, r;
    LL arr[100010],sum[100010]={0},sum2[100010]={0};
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i-1];
        sum[i]=sum[i-1]+arr[i-1];
    }
    sort(arr,arr+n);
    for(int i=1;i<=n;++i)
        sum2[i]=sum2[i-1]+arr[i-1];
    cin>>m;
    for(int i=0;i<m;++i)
    {
        cin>>type>>l>>r;
        cout<<(type==1?sum[r]-sum[l-1]:sum2[r]-sum2[l-1])<<endl;
    }
    return 0;
}
