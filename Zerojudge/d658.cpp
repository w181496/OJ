#include <iostream>
using namespace std;
int main()
{
    long long int n,a=1,b=0;
    while(cin>>n)
    {
        b++;
        if(n<0)break;
        if(n==1)
            {
                cout<<"Case "<<b<<": 0"<<endl;
                a=1;
                continue;
            }
        for(int i=1;i>=1;i++)
        {
            a*=2;
            if(a>=n)
            {
                cout<<"Case "<<b<<": "<<i<<endl;
                a=1;
                break;
            }
        }
    }

    return 0;
}
