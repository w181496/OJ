#include <iostream>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        if(n%4==0&&n%100!=0&&n!=0)
        {
            cout<<"a leap year"<<endl;
        }
        else if(n%400==0&&n!=0)
        {
            cout<<"a leap year"<<endl;
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout<<"a normal year"<<endl;
        }
    }

    return 0;
}
