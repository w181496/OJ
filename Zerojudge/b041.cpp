#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool check1(string,string);
bool check2(string);
bool check3(string);
bool check4(string);
bool check5(string);
bool check6(string);
bool check7(string);
bool check8(string,int);
int main()
{
    string s1,s2;
    while(1)
    {
        getline(cin,s1);
        getline(cin,s2);
        if(s1=="END"&&s2=="END")break;
        if(check1(s1,s2))
        {
            if(check2(s1))
            {
                if(check3(s1))
                {
                    if(check4(s1))
                    {
                        if(check5(s1))
                        {
                            if(check6(s1))
                            {
                                if(check7(s1))
                                {
                                    if(check8(s1,3)&&check8(s1,4)&&check8(s1,5)&&check8(s1,6))
                                    {
                                        cout<<"Password is valid."<<endl;
                                    }
                                    else
                                    {
                                        cout<<"Circular password is not allowed."<<endl;
                                    }
                                }
                                else
                                {
                                    cout<<"Symmetric password is not allowed."<<endl;
                                }
                            }
                            else
                            {
                                cout<<"Password should contain at least one special character."<<endl;
                            }
                        }
                        else
                        {
                            cout<<"Password should contain at least one number."<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Password should contain at least one lower-case alphabetical character."<<endl;
                    }
                }
                else
                {
                    cout<<"Password should contain at least one upper-case alphabetical character."<<endl;
                }
            }
            else
            {
                cout<<"Password should contain 8 to 12 characters."<<endl;
            }
        }
        else
        {
            cout<<"Password settings are not consistent."<<endl;
        }
    }
    return 0;
}
bool check1(string s1,string s2)
{
    if(s1==s2)return true;
    else return false;
}
bool check2(string s)
{
    if(s.size()>=8&&s.size()<=12)return true;
    else return false;
}
bool check3(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            return true;
    }
    return false;
}
bool check4(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            return true;
    }
    return false;
}
bool check5(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            return true;
    }
    return false;
}
bool check6(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==' '||(a[i]>31&&a[i]<48)||(a[i]>57&&a[i]<65)||(a[i]>90&&a[i]<97)||(a[i]>122&&a[i]<127))
            return true;
    }
        return false;
}
bool check7(string s)
{
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-1-i])
            return true;
    }
    return false;
}
bool check8(string s,int x)
{
    for (int i=0; i<x; i++)
        for (int j=i+x; j<s.size(); j+=x)
            if(s[j]!=s[j-x]) return true;
    return false;
}
