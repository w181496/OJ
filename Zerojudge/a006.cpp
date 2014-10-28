#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b ,c ,d ,e;
    while(cin>>a>>b>>c)
    {
        if(b*b-4*a*c>0)
        {
            d=1/(2*a)*(-b+sqrt(b*b-4*a*c));
            e=1/(2*a)*(-b-sqrt(b*b-4*a*c));
            cout<<"Two different roots x1="<<d<<" , x2="<<e<<endl;
        }
        else if(b*b-4*a*c==0)
        {
            d=1/(2*a)*(-b+sqrt(b*b-4*a*c));
            cout<<"Two same roots x="<<d<<endl;
        }
        else
        {
            cout<<"No real root"<<endl;
        }

    }
    return 0;
}
