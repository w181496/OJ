#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int a=1, b=1,c1=1,c2=1,d=1;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        if(b>a)
        {
            d=a;
            a=b;
            b=d;
        }
        c1=sqrt(a*a-b*b);
        c2=sqrt(a*a+b*b);
        if(c1*c1+b*b==a*a)
            cout<<c1<<" "<<endl;
        if(a*a+b*b==c2*c2)
            cout<<c2<<" "<<endl;
        if(c1*c1+b*b!=a*a&&a*a+b*b!=c2*c2)
            cout<<"Wrong"<<endl;
    }

    return 0;
}
