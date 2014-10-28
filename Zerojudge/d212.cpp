#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=1,c=2,d=0;
    while(cin>>a)
    {
        if(a>2)
        {
            for(int i=2;i<=a;i++)
            {
                d=c;
                c=b+c;
                b=d;
            }
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        b=1;c=2;
    }
    return 0;
}
