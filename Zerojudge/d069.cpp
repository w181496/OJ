#include <iostream>

using namespace std;

int main()
{

    int a=0,b=0;

    while(cin>>a)
    {
        for(int i=1;i<=a;i++)
        {
            cin>>b;
            if(b%4==0&&b%100!=0)
            {
                cout<<"a leap year"<<endl;
            }
            else if(b%400==0)
            {
                cout<<"a leap year"<<endl;
            }
            else
            {
                cout<<"a normal year"<<endl;
            }
        }
    }

    return 0;
}
