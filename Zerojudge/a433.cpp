#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a,b;
        cin>>a>>b;
        double x=a*a/b;
        x=b-x;
        cout<<fixed<<setprecision(3)<<x/b<<endl;;
    }
    return 0;
}
