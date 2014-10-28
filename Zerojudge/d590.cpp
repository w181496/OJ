#include <iostream>

using namespace std;

int main()
{
    long long int a,b;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)break;
        if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
        {
            cout<<"Win"<<endl;
        }
        else
        {
            cout<<"Loss"<<endl;
        }
    }

    return 0;
}
