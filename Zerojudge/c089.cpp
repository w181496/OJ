#include <iostream>
#include <string>
using namespace std;
int converted_to_decimal(int,string);
string decimal_to_after(int,int);
int main()
{
    int before,after,dec;
    string number;
    while(cin>>number>>before>>after){
    dec=converted_to_decimal(before,number);
    string t=decimal_to_after(dec,after);
    if(t.size()>=8)cout<<"ERROR"<<endl;
    else
    cout<<t<<endl;
    }
    return 0;
}
int converted_to_decimal(int before,string number)
{
    int sum=0,t=1;
    for(int i=number.size()-1;i>=0;--i)
    {
        if(number[i]=='A')
        {
            sum+=10*t;
        }
        else if(number[i]=='B')
        {
            sum+=11*t;
        }
        else if(number[i]=='C')
        {
            sum+=12*t;
        }
        else if(number[i]=='D')
        {
            sum+=13*t;
        }
        else if(number[i]=='E')
        {
            sum+=14*t;
        }
        else if(number[i]=='F')
        {
            sum+=15*t;
        }
        else
        {
            sum+=(number[i]-'0')*t;
        }

        t*=before;
    }

    return sum;
}
string decimal_to_after(int dec,int after)
{
    string w="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str,str2;
    while(dec>0)
    {
        str+=w[dec%after];
        dec/=after;
    }
    for(int i=str.size()-1;i>=0;--i)
        str2+=str[i];
    return str2;
}
