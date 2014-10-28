#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a,b;
    int c,d;


    while(cin>>a>>b)
    {
        c=(b-b%2-(a+a%2))/2+1;
        cout<<c<<endl;

    }




    return 0;
}
