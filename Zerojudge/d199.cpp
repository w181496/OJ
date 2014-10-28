#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b,c,t;
    while(cin>>a>>b>>c)
    {
        t=sqrt(a*a+b*b+c*c+2*a*b+2*b*c-2*a*c);
        cout<<t<<endl;
    }
    return 0;
}
