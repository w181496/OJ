#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n , k, arr[2010], id=0;
    cin >> n >> k;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
    int ans=0,i=n-1;
    while(i>=0)
    {
        int mx=-1;
        for(int j=0;j<k && i-j>=0;++j)
        {
             mx=max(mx,arr[i-j]);
        }
        ans+=(mx-1);
        i=i-k;
    }
    cout<<ans*2<<endl;
    return 0;
}
