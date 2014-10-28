#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)break;
        if(a*c-b*d==0)
        {
            cout<<"cheat!"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(5)<<(1/(a*d-b*c))*d<<" "<<(1/(a*d-b*c))*-1*b<<endl;
            cout<<fixed<<setprecision(5)<<(1/(a*d-b*c))*-1*c<<" "<<(1/(a*d-b*c))*a<<endl;
        }
    }
    return 0;
}
