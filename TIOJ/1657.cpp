#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        for(int i=1;i<=a;i++)
        {
            cout<<i<<"*"<<1<<"="<<i*1;
            for(int j=2;j<=b;++j)
            {
                cout<<" "<<i<<"*"<<j<<"="<<i*j;
            }
            cout<<endl;
        }
    }
    return 0;
}