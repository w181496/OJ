#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="-1")break;
        if(s[0]=='0'&&s[1]=='x')
        {
            string s2="0123456789ABCDEF";
            int sum=0;
            for(int i=2;i<s.size();i++)
            {
                sum=sum*16+s2.find(s[i]);
            }
            cout<<sum<<endl;
        }
        else
        {
             string s2="0123456789ABCDEF",s3;
             stringstream ss(s);
             int n;
             ss>>n;
             while(n>0)
             {
                 s3+=s2[n%16];
                 n/=16;
             }
             cout<<"0x";
             for(int i=s3.size()-1;i>=0;i--)
                cout<<s3[i];
             cout<<endl;
        }
    }
    return 0;
}
