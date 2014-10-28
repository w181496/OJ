#include<iostream>
#include<cmath>
#include<iomanip>
#define pi 3.141592653589793
using namespace std;
double dis(double x1,double x2,double y1,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double are(double a,double b,double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,area;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a=dis(x1,x2,y1,y2);
        b=dis(x2,x3,y2,y3);
        c=dis(x1,x3,y1,y3);
        area=are(a,b,c);
        cout<<fixed<<setprecision(2)<<(2.0*a*b*c*pi/4.0/area)<<endl;
    }
}
