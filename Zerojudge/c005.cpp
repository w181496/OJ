#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,n,f=0,sum=0;

    while(cin>>n)
    {
        for(int i=n;i>=1;i--)
        {
            cin>>f;
            for(int u=f;u>=1;u--)
            {
                cin>>a>>b>>c;
                sum=a*c+sum;
            }
            cout<<sum<<endl;
            sum=0;
        }
    }


    return 0;
}
