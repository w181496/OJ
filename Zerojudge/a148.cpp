#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    double n,num,sum=0;
    while(cin>>n)
    {
        for(int i=1;i<=n;++i)
        {
            cin>>num;
            sum+=num;
        }
        if(sum/n>59)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        sum=0;
    }
    return 0;
}
