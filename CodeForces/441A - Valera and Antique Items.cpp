#include <iostream>
using namespace std;
typedef long long LL;
LL n, l, k, arr[60], ans, tmp, id;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>l;
    ans=id=0;
    for(int i=0;i<n;++i)
    {
        cin>>k;
        for(int j=0;j<k;++j)
        {
            cin>>tmp;
            if(tmp<l && arr[id-1]!=i+1)
            {
                ans++;
                arr[id++]=i+1;
            }
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<id;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
