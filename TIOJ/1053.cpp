#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;
    while(cin>>a>>b)
    {
       if(a>b)
       {
           c=a;
           a=b;
           b=c;
       }
       if(b%a==0)
       {
           cout<<"Y"<<endl;
       }
       else
       {
           cout<<"N"<<endl;
       }
    }
    return 0;
}