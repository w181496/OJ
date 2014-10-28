#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a,b=0,c=1;
    while(cin>>a)
    {
        if(a<0)
        {
            cout<<"-1"<<endl;
              break;
        }

        do
        {
        b=(a%8)*c+b;
        a=(a-a%8)/8;
        c*=10;
        }
        while(a>0);
        cout<<b<<endl;
        b=0;c=1;
    }

    return 0;
}
