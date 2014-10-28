#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int isp(const char);
int icp(const char);
int StringToInt(string&);
int Check(const int,const int,string&);
int main()
{
    stack<char>stk;
    string str,s;
    int l=0;
    stk.push('#');
    while(getline(cin,str))
    {
        string st;
        stringstream ss(str.c_str());
        while(ss>>s)
        {
            if(s[0]>='0'&&s[0]<='9'&&l==0)
            {
                st+=s;
                l=1;
            }
            else if(s[0]>='0'&&s[0]<='9'&&l==1)
            {
                st=st+" "+s;
            }
            else if(s[0]==')')
            {
                while(stk.top()!='(')
                {
                    st=st+" "+stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            else if(icp(s[0])>isp(stk.top()))
            {
                stk.push(s[0]);
            }
            else
            {
                do
                {
                    st=st+" "+stk.top();
                    stk.pop();
                }while(icp(s[0])<=isp(stk.top()));
                if(s[0]!=')')
                    stk.push(s[0]);
            }
        }
        while(stk.top()!='#')
        {
            if(stk.top()!='(')
                st=st+" "+stk.top();
            stk.pop();
        }
        l=0;
        ///
        string str,s;
        stack<int>stk2;
        int t,n1,n2;
        str=st;
            stringstream ss2(str.c_str());
            while(ss2>>s)
            {
                if(s[0]>='0'&&s[0]<='9')
                {
                    t=StringToInt(s);
                    stk2.push(t);
                }
                else
                {
                    n2=stk2.top();
                    stk2.pop();
                    n1=stk2.top();
                    stk2.pop();
                    t=Check(n1,n2,s);
                    stk2.push(t);
                }
            }
            cout<<stk2.top()<<endl;
            stk2.pop();
    }
    return 0;
}
int isp(const char ch)
{
    if(ch=='+'||ch=='-')
        return 10;
    else if(ch=='*'||ch=='/'||ch=='%')
        return 20;
    else if(ch=='#')
        return 0;
    else if(ch=='(')
        return 1;
}
int icp(const char ch)
{
    if(ch=='+'||ch=='-')
        return 10;
    else if(ch=='*'||ch=='/'||ch=='%')
        return 20;
    else if(ch==')')
        return 2;
    else if(ch=='(')
        return 100;
}
int StringToInt(string &s)
{
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
        sum=sum*10+s[i]-'0';
    }
    return sum;
}
int Check(const int n1,const int n2,string &s)
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
