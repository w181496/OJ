#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    long long int n;
    while(cin >> n)
    {
        if(n==0)break;
        long long int t=sqrt(n);
        if(t*t==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
