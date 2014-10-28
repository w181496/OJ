#include <iostream>


using namespace std;

int main()
{
    int a;


    while(cin>>a)
    {
        if(a%4==0&&a%100!=0)
        {
            cout<<"a leap year"<<endl;
        }
        else if(a%400==0)
        {
            cout<<"a leap year"<<endl;
        }
        else if(cin.fail())
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
