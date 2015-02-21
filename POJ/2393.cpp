#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n, s, c[10001], a[10001], ans=0;
    cin>>n>>s;
    for(int i=0;i<n;++i)
        cin>>c[i]>>a[i];
    for(int i=0;i<n;++i)
    {
        ans+=(c[i]*a[i]);
        for(int j=i+1;j<n;++j)
        {
            if(c[i]+(j-i)*s<c[j])
            {
                ans+=((c[i]+(j-i)*s)*a[j]);
                a[j]=0;
            }
            else
            {
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;

}
