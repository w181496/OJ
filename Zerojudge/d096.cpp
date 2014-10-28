#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n;
    while(cin>>n)
        cout<<3*((n*n+2*n-15)/2)+15<<endl;
    return 0;
}
