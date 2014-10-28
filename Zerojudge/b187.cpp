#include <iostream>
#include <iomanip>
using namespace std;
int hex_dec(string);
int main()
{
    string a;
    cin>>a;
    cout<<"十六進位表示法  相對應的十進位表示法"<<endl;
    cout<<"      "<<a<<"                 "<<hex_dec(a)<<endl;
    while(cin>>a)
    {
        if(cin.fail())break;
        cout<<"      "<<a<<"                 "<<hex_dec(a)<<endl;
    }

 return 0;
}
int hex_dec(string a)
{
    string s="0123456789ABCDEF";
    int sum=0,t=1;
    for(int i=a.size()-1;i>=0;i--)
    {
        for(int j=0;j<s.size();++j)
        {
            if(a[i]==s[j])
                sum=sum+j*t;
        }
        t*=16;
    }
    return sum;
}
