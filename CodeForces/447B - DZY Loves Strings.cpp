#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n;
    int ans=0;
    cin>>s;
    cin>>n;
    int value[26];
    for(int i=0;i<26;++i)
        cin>>value[i];
    for(int i=0;i<s.size();++i)
        ans+=(value[s[i]-'a']*(i+1));
    sort(value,value+26);
    int mx=value[25];
    for(int i=0;i<n;++i)
         ans+=(mx*(s.size()+i+1));
    cout<<ans<<endl;
    return 0;
}