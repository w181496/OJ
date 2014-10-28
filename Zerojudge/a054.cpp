#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int c=s[8]-'0',t;
        int m=10-c;
        int sum=0;
        for(int i=0;i<s.size()-1;++i)
        {
            sum+=(s[i]-'0')*(8-i);
        }
        sum%=10;
        if(sum>m)
            t=10+m-sum;
        else
            t=m-sum;
        t%=10;
        if(t==1)
            cout<<"AMW"<<endl;
        else if(t==2)
            cout<<"KLY"<<endl;
        else if(t==3)
            cout<<"JVX"<<endl;
        else if(t==4)
            cout<<"HU"<<endl;
        else if(t==5)
            cout<<"GT"<<endl;
        else if(t==6)
            cout<<"FS"<<endl;
        else if(t==7)
            cout<<"ER"<<endl;
        else if(t==8)
            cout<<"DOQ"<<endl;
        else if(t==9)
            cout<<"CIP"<<endl;
        else
            cout<<"BNZ"<<endl;
    }
    return 0;

}
