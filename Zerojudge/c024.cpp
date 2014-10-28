#include <iostream>

using namespace std;

int main()
{
    long long int a;

   while(cin>>a)
   {
       if(a<0)break;
       cout<<(a*a+a-2)/2+2<<endl;
   }

    return 0;
}
