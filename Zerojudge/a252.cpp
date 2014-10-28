#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
main()
{
    string s1,s2,s3;
    while(cin>>s1>>s2>>s3)
    {
        int dp[s1.size()+1][s2.size()+1][s3.size()+1];
        for(int i=0; i<s1.size()+1; ++i)
            for(int j=0; j<s2.size()+1; ++j)
                for(int k=0; k<s3.size()+1; ++k)
                    if(i==0||j==0||k==0)dp[i][j][k]=0;
        for(int i=1; i<s1.size()+1; ++i){
            for(int j=1; j<s2.size()+1; ++j){
                for(int k=1; k<s3.size()+1; ++k){
                    if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1])
                    {
                        dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                    }
                    else
                    {
                        dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
                    }
                }
            }
        }
        cout<<dp[s1.size()][s2.size()][s3.size()]<<endl;
    }
}
