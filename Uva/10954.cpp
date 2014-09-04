#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF&&n!=0)
    {
        long long int s[n];
        for(long long int i=0; i<n; ++i)
            scanf("%lld",&s[i]);
        sort(s,s+n);
        long long int ans=0;
        for(long long int i=1; i<n; ++i)
        {
            s[i]+=s[i-1];
            ans+=s[i];
            for(long long int j=i+1; j<n; ++j)
            {
                if(s[j]<s[j-1])
                    swap(s[j],s[j-1]);
                else
                    break;
            }
        }
        printf("%lld\n",ans);
    }
    return 0 ;
}

