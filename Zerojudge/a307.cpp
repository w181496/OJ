#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
        {
            cout<<0<<endl;
            continue;
        }
        string s2;
        if(s[0]=='-')
        {
            s2+="-";
            s=s.substr(1,s.size()-1);
        }
        if(s[s.size()-1]=='0')
        {
            int t=s.size()-2;
            while(s[t]=='0')
            {
                t--;
            }
            s=s.substr(0,t+1);
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            s2+=s[i];
        }
        cout<<s2<<endl;
    }
    return 0;
}
