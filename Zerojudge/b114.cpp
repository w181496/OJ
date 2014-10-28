#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    double a1,a2,b1,b2;
    while(cin>>a1>>a2>>b1>>b2)
    {
        double x=(b2-b1)/(a1-a2),y=(a1*(b2-b1))/(a1-a2)+b1;
        if(x==0)cout<<"0"<<endl;
        else cout<<x<<endl;
        if(y==0)cout<<"0"<<endl;
        else cout<<y<<endl;
    }
    return 0;
}
