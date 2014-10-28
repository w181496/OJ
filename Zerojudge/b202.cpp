#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,n;





    while(cin>>n)
    {
       for(int i=n;i>=1;i--)
       {
           cin>>a>>b>>c;
           if(a!=b&&b!=c&&a!=c)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
    }


    return 0;
}
