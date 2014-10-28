#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b=0;

   while(cin>>a)
   {
       if(a<11&&a>=0)
       {
           b=6*a;
       }
       else if(a>10&&a<21)
       {
           b=60+2*(a-10);
       }
       else if(a>20&&a<41)
       {
           b=80+(a-20);
       }
       else if(a>40)
       {
           b=100;
       }
       cout<<b<<endl;
       b=0;
   }
    return 0;
}
