#include<iostream>
#include<string>
using namespace std;
string s;
bool chk(int l,int r)
{
    for(int i=0;i<=(r-l+1)/2;++i)
        if(s[l+i]!=s[r-i])return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        int dp[1010];
        for(int j=0;j<s.size();j++)dp[j]=j+1;
        for(int j=0;j<s.size();++j)
        {
            if(chk(0,j))
            {
                dp[j]=1;
            }
            else
            {
                int mn=dp[j-1]+1;
                for(int k=j-1;k>0;k--)
                    if(chk(k,j))
                        mn=min(mn,dp[k-1]+1);
                dp[j]=mn;
            }
        }
        cout<<dp[s.size()-1]<<endl;
    }
    return 0;
}

