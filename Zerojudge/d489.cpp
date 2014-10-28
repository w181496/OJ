#include <iostream>

using namespace std;

int main()
{
    long int a,b,c,d,e;

    while(cin>>a>>b>>c)
    {
        d=(a+b+c)/2;
        e=d*(d-a)*(d-b)*(d-c);
        cout<<e<<endl;
    }
    return 0;
}
