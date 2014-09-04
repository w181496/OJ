#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;


int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a==0||b==0)break;
        long long int sum=0;
        if(a<b)
        {
            a+=b;
            b=a-b;
            a-=b;
        }
        sum+=((b*(1+b)/2)*(-b-a-2)+b*(b+1)*(2*b+1)/6+b*(a*b+b+a+1));
        cout<<sum<<endl;
    }
    return 0;
}