#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d=1,e=1;

    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b>>c;
        for(int t=1;t<=c-1;t++)
        {
            d*=b-t;
        }
        for(int r=1;r<=c-1;r++)
        {
            e*=r;
        }
        cout<<d/e<<endl;
        d=1;e=1;
    }
    return 0;
}
