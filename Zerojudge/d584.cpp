#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c=0;

    while(cin>>a>>b)
    {
        if(b>=120)
        {
            c=6;
        }
        else if(b>=70&&b<120)
        {
            c=3;
        }
        else if(b<70&&b>=30)
        {
            c=2;
        }
        else
        {
            c=1;
        }
        if(a==0)
        {
            cout<<"0"<<endl;
        }
        else if(a==1||a==3||a==4)
        {
            cout<<3*(b-10)+c<<endl;
        }
        else if(a==2)
        {
            cout<<3*(b-8)+c<<endl;
        }
    }


    return 0;
}
