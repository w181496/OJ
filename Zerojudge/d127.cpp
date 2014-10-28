#include <iostream>

using namespace std;

int main()
{
    long long int a,b,n;

    while(cin>>n)
    {
       if(n%4==0)
       {
           a=n/2;
           b=n-a;
           cout<<(a*b)/4<<endl;
       }
       else if(n%4!=0)
       {
           a=n/2+1;
           b=n-a;
           cout<<(a*b)/4<<endl;
       }
       a=0;b=0;
    }


    return 0;
}
