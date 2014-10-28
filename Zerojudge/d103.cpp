#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    string s;
    while(cin >> s)
    {
        int t=1,sum=0;
        for(int i=0;i<s.size()-1;++i)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                sum+=(s[i]-'0')*t;
                t++;
            }
        }
        sum%=11;
        if(sum==10&&s[s.size()-1]=='X')
        {
            cout<<"Right"<<endl;
        }
        else if(sum==10&&s[s.size()-1]!='X')
        {
            cout<<s.substr(0,s.size()-1)<<"X"<<endl;
        }
        else if(sum==s[s.size()-1]-'0')
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<s.substr(0,s.size()-1)<<sum<<endl;
        }
    }
    return 0;
}
