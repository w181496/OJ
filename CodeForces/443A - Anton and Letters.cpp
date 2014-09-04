#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
#include<map>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    map<string,int>m;
    string s,tmp;
    getline(cin,s);
    for(int i=0;i<s.size();++i)
        if(s[i]=='{'||s[i]=='}'||s[i]==',')s[i]=' ';
    stringstream ss(s);
    int ans=0;
    while(ss>>tmp)
    {
        if(m[tmp]==0)ans++;
        m[tmp]++;
    }
    cout<<ans<<endl;
    return 0;
}