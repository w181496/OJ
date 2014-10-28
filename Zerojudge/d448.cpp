#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    double t1,t2,t3,x1,x3;
    while(cin>>t1>>t2>>t3>>x1>>x3)
    {
        cout<<fixed << setprecision(6)<<x1-(t1-t2)*(x1-x3)/(t1-t3)<<endl;
    }
    return 0;
}
