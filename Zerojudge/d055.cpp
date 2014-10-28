#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double t, x1, y1, x2, y2, x3, y3;
    double A;
    cin>>t;
    for(int i=1; i<=t; ++i)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        A=(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)/2;
        if(A<0)A=-A;
        cout<<fixed<<setprecision(0)<<A/7<<endl;
    }
    return 0;
}
