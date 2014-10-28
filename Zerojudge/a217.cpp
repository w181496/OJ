#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main()
{
    string s;
    while(getline(cin,s))
    {
        int chk=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='i'&&((i==0)||(s[i-1]==' ')||(s[i-1]==',')||(s[i-1]=='.')||(s[i-1]=='?')||(s[i-1]=='!'))&&((s[i+1]==' ')||(s[i+1]==',')||(s[i+1]=='.')||(s[i+1]=='?')||(s[i+1]=='!')||(i==s.size()-1)))
            {
                s[i]='I';
                chk=1;
            }
            else if(s[i]>='a'&&s[i]<='z'&&chk==0)
            {
                s[i]+='A'-'a';
                chk=1;
            }
            else if(s[i]=='.'||s[i]=='?'||s[i]=='!')
            {
                chk=0;
            }
        }
        cout<<s<<endl;
    }
}
