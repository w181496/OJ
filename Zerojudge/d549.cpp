#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long long int n[3];
    while(cin>> n[0] >> n[1] >> n[2])
    {
        cout<<fixed<<setprecision(2)<<sqrt(n[0]*n[0]+n[2]*n[2]-n[1]*n[1])<<endl;
    }
    return 0;
}
