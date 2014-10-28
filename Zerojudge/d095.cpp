#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
    string a;
    double h,m,x;

    while(cin>>a)
    {
         if(a=="0:00")break;
            if(a[1]==':')
            {
                h=a[0]-'0';
                m=(a[2]-'0')*10+(a[3]-'0');
            }
            else if(a[2]==':')
            {
                h=(a[0]-'0')*10+(a[1]-'0');
                m=(a[3]-'0')*10+(a[4]-'0');
            }
            x=30*h+m/2-6*m;
            if(x<0)
            {
                x=-x;
            }
            if(x>180)
            {
                x=360-x;
            }
            cout<<fixed<<setprecision(3)<<x<<endl;
    }
}
