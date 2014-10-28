#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
     string str;
     while(cin>>str)
     {
         string s;
         map<char,int>n;
         for(int i=0;i<str.size();i++)
         {
             if(str[i]>='a'&&str[i]<='z')
             {
                 s+=str[i];
             }
             else if(str[i]>='A'&&str[i]<='Z')
             {
                 s+=str[i]+('a'-'A');
             }
         }
         for(int i=0;i<s.size();i++)
         {
                n[s[i]]++;
         }
         int t=0;
         for(map<char,int>::iterator it=n.begin();it!=n.end();it++)
         {
             if((*it).second%2!=0)t++;
         }
         if(t>=2)
         {
             cout<<"no..."<<endl;
         }
         else
         {
             cout<<"yes !"<<endl;
         }
     }
     return 0;
}
