#include <iostream>
using namespace std;
int main()
{
    long long int x;
    while(cin>>x)
    {
        int t=1;
        for(int i=1;i<=9;i++)
        {
            if(x<10)break;
            x/=10;
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}