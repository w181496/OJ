#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string s;
    int t,state;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        cin>>s;
        state=s[0]-'0';
        for(int j=1;j<s.size();++j)
        {
            if(state==2)
            {
                if(s[j]-'0'!=1)continue;
                else state=1;
            }
            else if(state==3||state==4)
            {
                if(state==3&&s[j]-'0'==4)state=4;
                else if(state==4&&s[j]-'0'==3)state=3;
                else if(s[j]-'0'==1)state=1;
            }
            else if(state==1||state==5||state==6||state==7)
            {
                state=(s[j]-'0');
            }
        }
        cout<<state<<endl;
    }
    return 0;
}
