#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        map<string,int>m;
        string s1,s2;
        for(int i=0;i<k;++i)
        {
            cin>>s1>>s2;
            m[s1]++;
            m[s2]=-99999;
        }
        int mx=-1;
        string ans;
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second>mx)
            {
                mx=it->second;
                ans=it->first;
            }
        }
        cout<<ans<<endl;
    }
}
