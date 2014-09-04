#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    while(cin >> a)
    {
        if(a==1)
        {
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(a==2)
        {
            cin>>a>>b;
            cout<<a-b<<endl;
        }
        else if(a==3)
        {
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else
        {
            cin>>a>>b;
            cout<<a%b<<endl;
        }
    }
    return 0;
}