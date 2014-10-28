#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t,n,r;
    string s,st;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        cin>>s;
        cin>>n;
        r=s.find('#');
        cout<<"DATA SET #"<<i<<":"<<endl;
        for(int j=1;j<=n;++j)
        {
            bool che=1;
            cin>>st;
            for(size_t k=0;k<r;++k)
            {
                if(s[k]!=st[k])che=false;
            }
            for(size_t k=0;k<s.size()-r-1;++k)
            {
                if(s[s.size()-k-1]!=st[st.size()-k-1])che=false;
            }
            if(che)cout<<"POSSIBLE"<<endl;
            else cout<<"IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}
