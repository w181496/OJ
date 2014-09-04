#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;

    cin>>a;

    for(int i=1;i<=a;i++)
    {
        cin>>b>>c;
        if(c%b==0)
        {
            cout<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

