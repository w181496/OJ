#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    long long int b,c=0;
    while(cin>>a>>b)
    {
       if(a=="Monday")
       {
           c=1;
       }
       else if(a=="Tuesday")
       {
           c=2;
       }
       else if(a=="Wednesday")
       {
           c=3;
       }
       else if(a=="Thursday")
       {
           c=4;
       }
       else if(a=="Friday")
       {
           c=5;
       }
       else if(a=="Saturday")
       {
           c=6;
       }
       else if(a=="Sunday")
       {
           c=7;
       }
       b+=c;
       if(b>7)
        b=b%7;
       if(b==1)
       {
           cout<<"Monday"<<endl;
       }
       else if(b==2)
       {
           cout<<"Tuesday"<<endl;
       }
       else if(b==3)
       {
           cout<<"Wednesday"<<endl;
       }
       else if(b==4)
       {
           cout<<"Thursday"<<endl;
       }
       else if(b==5)
       {
           cout<<"Friday"<<endl;
       }
       else if(b==6)
       {
           cout<<"Saturday"<<endl;
       }
       else if(b==7)
       {
           cout<<"Sunday"<<endl;
       }
       c=0;
    }
    return 0;
}