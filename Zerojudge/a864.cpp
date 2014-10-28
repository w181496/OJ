#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    double a,b;
    while(cin>>s>>b>>a)
    {
        double id=b-a;
        cout<<s<<" "<<fixed<<setprecision(2)<<id<<" ";
        if(id>=-0.35&&id<=-0.251)cout<<'O'<<endl;
        else if(id>=-0.25&&id<=-0.0001)cout<<'B'<<endl;
        else if(id>=0&&id<=0.249)cout<<'A'<<endl;
        else if(id>=0.25&&id<=0.499)cout<<'F'<<endl;
        else if(id>=0.5&&id<=0.999)cout<<'G'<<endl;
        else if(id>=1&&id<=1.499)cout<<'K'<<endl;
        else if(id>=1.5&&id<=2)cout<<'M'<<endl;
    }
    return 0;
}
