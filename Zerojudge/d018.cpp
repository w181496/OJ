#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    string str,s;
    double sum1=0.0,sum2=0.0;
    int t;
    double n;
    while(getline(cin,str))
    {
        for(int i=0;i<str.size();++i)
            if(str[i]==':')
                str[i]=' ';
        stringstream ss;
        ss<<str;
        while(ss>>t>>n)
        {
            if(t%2==0)
                sum2+=n;
            else
                sum1+=n;
        }
        cout<<sum1-sum2<<endl;
        sum1=0.0;sum2=0.0;
    }
    return 0;
}
