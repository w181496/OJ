#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double L,D,a;
    while(cin>>D>>L)
    {
        a=sqrt((L/2)*(L/2)-(D/2)*(D/2))*(L/2)*3.141592653;
        cout << fixed << setprecision(3)<< a<<endl;
    }
    return 0;
}
