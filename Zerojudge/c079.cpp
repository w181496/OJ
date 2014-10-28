#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=0,n,k=0,sum=0;

    while(cin>>n>>k)
    {
        sum=n;
        start:
       if(n%k==0&&n>=k)
       {
            sum=sum+n/k;
           n=n/k+b; 


           goto start;
       }
       else if(n%k!=0&&n>=k)
       {
            b=n%k;
            sum=sum+(n-n%k+b)/k;
           n=(n-n%k)/k+b;



           goto start;
       }
       else if(n<k)
       {
         cout<<sum<<endl;
       }
        a=0;b=0;sum=0;
    }


    return 0;
}
