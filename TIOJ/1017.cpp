#include <iostream>
using namespace std;
#define MAX 1000010
int t, n, mn[MAX], mx[MAX], arr[MAX], ans;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            if(i==0)
                mx[i]=arr[i];
            else
                mx[i]=max(mx[i-1],arr[i]);
        }
        mn[n-1]=arr[n-1];
        for(int i=n-2;i>=0;--i)
            mn[i]=min(mn[i+1],arr[i]);
        for(int i=1;i<n-1;++i)
            if(arr[i]>mx[i-1]&&arr[i]<mn[i+1])
                ans++;
        cout<<ans<<endl;
    }
    return 0;
}
