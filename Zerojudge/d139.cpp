#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void count (const string &);
int main()
{
    string s;
    while(cin>>s)
    {
        s+='#';
        count(s);
        cout<<endl;
    }
    return 0;
}
void count (const string &s)
{
    char ch=s[0];
    int n=1;
    for(int i=1;i<s.size();++i)
    {
        if(s[i]==ch)
        {
            n++;
        }
        else
        {
            if(n>2)
                cout<<n<<ch;
            else if(n==2)
                cout<<ch<<ch;
            else
                cout<<ch;
             ch=s[i];
             n=1;
        }
    }
}
