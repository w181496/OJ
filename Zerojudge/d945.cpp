#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        int ans=1;
        for(int j=0,k;j<s.size();++j)
        {
            for(k=1;j-k>=0&&j+k<s.size();++k)
            {
                if(s[j-k]!=s[j+k]){
                    break;
                }
            }
            k--;
            if(k*2+1>ans)ans=k*2+1;
        }
        for(int j=0,k;j<s.size();++j)
        {
            for(k=1;j-k>=0&&j+k-1<s.size();++k)
            {
                if(s[j-k]!=s[j+k-1]){
                    break;
                }
            }
            k--;
            if(k*2>ans)ans=k*2;
        }
        cout<< ans <<endl;
    }
    return 0;
}
