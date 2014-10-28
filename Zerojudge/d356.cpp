#include <iostream>
#include <string>
using namespace std;

int main()
{
    double n,t;
    while(cin>>n)
    {
        double sum=0;
        for(double i=1;;i++)
        {
            if(sum>n)break;
            sum+=(1/i);
            t=i;
        }
        cout<<t<<endl;
    }

    return 0;
}
