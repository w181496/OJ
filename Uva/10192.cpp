#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
main()
{
    string s1,s2;
    int time=0;
    while(1)
    {
        getline(cin,s1);
        time++;
        if(s1=="#")break;
        getline(cin,s2);
        int dp[s1.size()+1][s2.size()+1];
        for(int i=0;i<=s1.size();++i)
            for(int j=0;j<=s2.size();++j)
                if(i==0||j==0)dp[i][j]=0;
        for(int i=1;i<=s1.size();++i)
            for(int j=1;j<=s2.size();++j)
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        cout<<"Case #"<<time<<": you can visit at most "<<dp[s1.size()][s2.size()];
        if(dp[s1.size()][s2.size()]==1)cout<<" cities."<<endl;
        else cout<<" cities."<<endl;
    }
}
