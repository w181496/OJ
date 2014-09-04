#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string str="AVXSWDFGUHJKNBIOQEARYCQZTZ";
    string s1="-=[]\\;',./ ";
    string s2="0-P[]L;M,. '";
    while(getline(cin,s))
    {
        for(size_t i=0;i<s.size();++i)
        {
            if(s[i]>='A'&&s[i]<='Z')
                cout<<str[s[i]-'A'];
            else if(s[i]>='2'&&s[i]<='9')
                cout<<s[i]-'0'-1;
            else if(s[i]=='0')
                cout<<9;
            else if(s[i]=='1')
                cout<<"`";
            else
                cout<<s2[s1.find(s[i])];
        }
        cout<<endl;
    }
    return 0;
}
