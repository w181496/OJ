#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, a, b;
    while(cin>>n)
    {
        a=sqrt(n);
        b=n-a*a;
        if(b==0)
        {
            cout<<2*a-1<<endl;
        }
        else if(b<a)
        {
            cout<<2*a<<endl;
        }
        else
        {
            if(b%a>0)cout<<2*a-1+b/a+1<<endl;
            else cout<<2*a-1+b/a<<endl;
        }
    }
}
