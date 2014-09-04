#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n,a,b,c;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}