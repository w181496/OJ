#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0;

    while(cin>>a)
    {
        for(int i=a;i>=1;i--)
        {
            cin>>b;
        }
        for(int y=1;y<=a;y++)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }


    return 0;
}
