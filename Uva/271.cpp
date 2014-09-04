#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        stack<char> stk;
        int t=1;
        for(int i=s.size()-1;i>=0;--i)
        {
            if(s[i]>='p'&&s[i]<='z')
            {
                stk.push(s[i]);
            }
            else if(s[i]=='N')
            {
                if(stk.size()>=1)
                    continue;
                else
                    t=0;
            }
            else if(s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='I')
            {
                if(stk.size()>=2)
                    stk.pop();
                else
                    t=0;
            }
            else
            {
                t=0;
            }
        }
        stk.pop();
        if(t==1&&stk.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
