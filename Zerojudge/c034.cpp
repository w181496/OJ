#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int>n;
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;--i)
        n.push_back(s[i]-'0');
    while(cin>>s)
    {
        if(s=="0")break;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(i>=n.size())n.push_back(0);
            n[s.size()-i-1]+=s[i]-'0';
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>9)
            {
                if(i+1>=n.size())n.push_back(0);
                n[i+1]++;
                n[i]-=10;
            }
        }
    }
    for(int i=n.size()-1;i>=0;--i)
        cout<<n[i];
    cout<<endl;
    return 0;
}
