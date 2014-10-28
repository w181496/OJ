#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s2;
    int i,t=0,size;
    getline(cin,s);
    size=s.size();
    getline(cin,s2);
    for(i=0; i<s2.size(); ++i)
    {
        if(s2[i]=='0')
        {
            t=0;
        }
        else if(s2[i]=='$')
        {
            t=size;
        }
        else if(s2[i]=='x')
        {
            if(t==size)continue;
            for(int j=t; j<size-1; ++j)
            {
                s[j]=s[j+1];
            }
            s[size-1]='\0';
            size--;
        }
        else if(s2[i]=='s')
        {
            if(t==size||t==size-1)continue;
            char temp=s[t];
            s[t]=s[t+1];
            s[t+1]=temp;
        }
        else if(s2[i]=='i')
        {
            i++;
            char ch;
            ch=s2[i];
            while(s.size()<=size)
                s+=' ';
            for(int j=size; j>=t+1; --j)
            {
                s[j]=s[j-1];
            }
            s[t]=ch;
            size++;
            t++;
        }
        else if(s2[i]=='u')
        {
            if(s[t]>='a'&&s[t]<='z')
                s[t]+='A'-'a';
            t++;
        }
        else if(s2[i]=='+')
        {
            t++;
        }
        else if(s2[i]=='-')
        {
            t--;
        }
    }
    if(s[0]!='\0')
    cout<<s<<endl;

    return 0;
}
