#include <iostream>

using namespace std;

int main()
{
    long long int a,b;

    while(cin>>a>>b)
    {
        if((a-b)>0)
        {
            cout<<a-b<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }

    return 0;
}
