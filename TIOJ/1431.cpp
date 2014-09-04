#include <iostream> //切割一半求排列數
#include <cstring>
#include <string>
using namespace std;
int main()
{
    long long int h[21]; //1!~20!的表格
    long long int k[26]; //紀錄a~z出現次數
    h[0]=h[1]=1;
    for(int i=2;i<=20;++i)
        h[i]=h[i-1]*i;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        memset(k,0,sizeof(k));
        int c=0;
        for(int i=0;i<s.size();++i)
            k[s[i]-'a']++;
        for(int i=0;i<26;++i)
        {
            if(k[i]%2==1)c++;
        }
        if(c>=2){cout<<0<<endl;}
        else
        {
            long long int ans=h[(s.size()-c)/2];
            for(int j=0;j<26;++j)
                ans/=h[k[j]/2];
            cout<<ans<<endl;
        }
    }
    return 0;
}
