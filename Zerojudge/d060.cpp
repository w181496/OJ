#include <iostream>

using namespace std;

int main()
{
    int a;

    while(cin>>a)
    {
        if(a>25)
        {
            cout<<85-a<<endl;
        }
        else if(a<25&&a>=0)
        {
            cout<<25-a<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }



    return 0;
}
