#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
bool check(string&);
int number(int,int,string&);
int string_number(string&);
int main()
{
    string str,s;
    stack<int>stk;
    while(getline(cin,str))
    {
        int num,n1,n2;
        int t;
        stringstream ss,ss2;
        ss<<str;
        while(ss>>s)
        {
            if(check(s))
            {
                t=string_number(s);
                stk.push(t);
            }
            else
            {
                n2=stk.top();
                stk.pop();
                n1=stk.top();
                stk.pop();
                num=number(n1,n2,s);
                stk.push(num);
            }
        }
        cout<<stk.top()<<endl;
    }
    return 0;
}
bool check(string &s)
{
    if(s[0]>='0'&&s[0]<='9')
        return true;
    else
        return false;
}
int number(int n1,int n2,string &s)
{
    if(s[0]=='+')
        return n1+n2;
    else if(s[0]=='-')
        return n1-n2;
    else if(s[0]=='*')
        return n1*n2;
    else if(s[0]=='%')
        return n1%n2;
    else
        return n1/n2;
}
int string_number(string &s)
{
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
        sum=sum*10+s[i]-'0';
    }
    return sum;
}
