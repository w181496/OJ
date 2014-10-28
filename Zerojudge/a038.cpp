#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;

    while(cin>>a)
    {
        while(a>0)
        {
            b=a%10;
            a=a/10;
            c=10*c+b;
        }
        cout<<c<<endl;
        b=0,c=0;
    }


    return 0;
}
