#include <iostream>
#include <string>
using namespace std;

int nn(int );

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"0! = 1 = 1"<<endl;
            continue;
        }
        cout<<n<<"! = ";
        cout<<n;
        for(int i=n-1;i>0;--i)
            cout<<" * "<<i;
        cout<<" = ";
        cout<<nn(n)<<endl;
    }
    return 0;
}

int nn(int n)
{
    if(n==1)return 1;
    return nn(n-1)*n;
}
