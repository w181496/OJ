#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        char ch;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]>='a'&&s[i]<='z')
                ch=s[i]+'A'-'a';
            else if(s[i]>='A'&&s[i]<='Z')
                ch=s[i]+'a'-'A';
            else
                ch=' ';
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}