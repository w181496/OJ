#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define MAX 1e9
int main()
{
    ios_base::sync_with_stdio(0);
    int t, n;
    int cnt[1111][30];
    string s[1111];
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<n;++i)
        {
            cin>>s[i];
            for(int j=0;j<s[i].size();++j)
                cnt[i][s[i][j]-'a']++;
        }
        string str;
        while(cin>>str && str!="END")
        {
            cout<<"Anagrams for: "<<str<<endl;
            int cnt2[30];
            memset(cnt2,0,sizeof(cnt2));
            for(int i=0;i<str.size();++i)
                cnt2[str[i]-'a']++;
            int num=0;
            for(int i=0;i<n;++i)
            {
                bool flag=true;
                for(int j=0;j<26;++j)
                {
                    if(cnt[i][j]!=cnt2[j])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    if(num+1>99)cout<<num+1<<") "<<s[i]<<endl;
                    else if(num+1>9)cout<<" "<<num+1<<") "<<s[i]<<endl;
                    else cout<<"  "<<num+1<<") "<<s[i]<<endl;
                    num++;
                }
            }
            if(num==0)cout<<"No anagrams for: "<<str<<endl;
        }
        if(t>0)cout<<endl;
    }
    return 0;
}
