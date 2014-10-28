#include <cstdio>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int f(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int t=n;
        bool chk=true;
        for(int i=1;i<=100;++i)
        {
            n=f(n);
            if(n==1)
            {
                chk=false;
                break;
            }
        }
        if(chk)cout<<t<<" is an unhappy number"<<endl;
        else cout<<t<<" is a happy number"<<endl;
    }
    return 0;
}
