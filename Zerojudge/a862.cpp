#include <cstdio>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double v,r;
    while(cin>>v>>r)
    {
        cout<<fixed<<setprecision(4)<<v*1000/r<<endl;
    }
    return 0;
}
