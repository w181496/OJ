#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,arr[100010];
    cin>>n;
    for(int i=0;i<n;++i)cin>>arr[i];
    int ans=0;
    bool chk=false;
    for(int i=1;i<n;++i)
    {
        if(arr[i]<arr[i-1])
        {
            if(!chk)
            {
                chk=true;
                ans++;
            }
            else
            {
                ans=-1;
                break;
            }
        }
        else if(chk)
        {
            ans++;
        }
    }
    if(arr[n-1]>arr[0])ans=-1;
    if(!chk)cout<<0<<endl;
    else
    cout<<ans<<endl;
    return 0;
}