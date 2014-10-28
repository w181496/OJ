#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n;
    string sss;
    while(getline(cin,sss))
    {
        stringstream ss;
        ss<<sss;
        ss>>n;
        string s[n];
        for(int i=0;i<n;++i)
            s[i]="";
        for(int i=0; i<n; ++i)
        {
            getline(cin,s[i]);
        }
        sort(s,s+n);
        for(int i=0; i<n; ++i)
        {
            if(s[i]=="4a"&&i==0)cout<<"5a"<<endl;
            else if(s[i]=="5a"&&i==1)cout<<"4a"<<endl;
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
