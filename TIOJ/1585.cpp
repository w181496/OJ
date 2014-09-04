#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(const string &a,const string &b)
{
    string t="azbycxdwevfugthsirjqkplomn";
    for(int i=0;i<a.size();++i)
    {
        int k1=t.find(a[i]),k2=t.find(b[i]);
        if(k1==k2)continue;
        return(k1<k2);
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n)
    {
        string s[n];
        for(int i=0;i<n;++i)
            cin>>s[i];
        sort(s,s+n,compare);
        for(int i=0;i<n;++i)
            cout<<s[i]<<endl;
    }
}