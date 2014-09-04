#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long long int a;
    while(cin>>a)
    {
        unsigned long long int r=1;
        for(unsigned long long int i=2;i<=a;++i)
        {
            r*=i;
            while(r%10==0)
            {
                r/=10;
            }
            r%=100000;
        }
        cout<<setw(5)<<setfill(' ')<<a<<" -> "<<r%10<<endl;
    }
    return 0;
}