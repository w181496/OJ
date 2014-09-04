#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b&&a!=-1&&b!=-1)
    {
        if(a>b)
        {
            a+=b;
            b=a-b;
            a-=b;
        }
        if(b-a>a+100-b)cout<<a+100-b<<endl;
        else cout<<b-a<<endl;
    }
    return 0;
}
