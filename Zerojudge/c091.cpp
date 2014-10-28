#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="e/o/i")break;
        int count=0;
        int chk=1;
        int chk2=1;
        for(int i=0;i<s.size();++i)
        {
            if(chk==1&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'))
            {
                chk=0;
                count++;
            }
            else if(s[i]!='/'&&!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'))
            {
                chk=1;
            }
            else if(s[i]=='/')
            {
                chk=1;
                if(chk2==1)
                {
                    if(count!=5)
                    {
                        cout<<chk2<<endl;
                        break;
                    }
                    else
                    {
                        chk2++;
                    }
                }
                else if(chk2==2)
                {
                    if(count!=12)
                    {
                        cout<<chk2<<endl;
                        break;
                    }
                    else
                    {
                        chk2++;
                    }
                }
            }
        }
        if(count!=17&&chk2==3)
        {
            cout<<chk2<<endl;
        }
        else if(count==17&&chk2==3)
        {
            cout<<"Y"<<endl;
        }
    }
}
