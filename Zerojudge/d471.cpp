#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        for(int i=1; i<=n; ++i)
        {
            s+='0';
        }
        cout<<s<<endl;
        while(s[0]<'2')
        {
            s[s.size()-1]++;
            for(int i=s.size()-1; i>0; i--)
            {
                if(s[i]=='2')
                {
                    s[i-1]++;
                    s[i]-=2;
                }

            }
            if(s[0]=='2')
                break;
            cout<<s<<endl;
        }
    }
}
