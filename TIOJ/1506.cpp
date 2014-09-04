#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    double a,b,c,d, x, y;
    while(cin>>a>>b>>c>>d)
    {
        if(a-b==0)
            x=0;
        else
            x=(-c+d)/(a-b);
        y=a*x+c;
        cout<<fixed<<setprecision(2)<<x<<endl;
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
    return 0;
}