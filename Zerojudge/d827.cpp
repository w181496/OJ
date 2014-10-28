#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;

    while(cin>>a)
    {
        if(a%12==0)
        {
            b=a/12;
            b=b*50;
        }
        else
        {
            c=a%12;
            b=(a-c)/12;
            b=b*50;
            b=b+5*c;
        }
        cout<<b<<endl;
    }

    return 0;
}
