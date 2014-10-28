#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b)
    {
        if(a>b)
        {

            while(c>0)
            {
                c=a%b;
                a=b;
                b=c;

            }
             cout<<a<<endl;
        }
        else if(a<b)
        {
            while(c>0)
            {
                c=b%a;
                b=a;
                a=c;
            }
             cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        c=1;
    }


    return 0;
}
