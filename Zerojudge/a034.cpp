#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b=0,i=1;

   while(cin>>a)
   {
       while(a>0)
       {
           b=(a%2)*i+b;
           a=(a-a%2)/2;
           i*=10;
       }
       cout<<b<<endl;
       b=0;i=1;
   }
    return 0;
}
