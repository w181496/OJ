#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        int sum=0;
        sum+=d;
        d=0;
        if(a>37*c)
            a-=37*c;
        else
            a=0;
        sum+=c;
        c=0;
        sum+=b/8;
        b%=8;
        if(b>0)
        {
            if(a>0)
            {
                if(b*8+a>64)
                {
                    a=a-64-b*8;
                    b=0;
                    sum++;
                }
                else
                {
                    a=0;
                    b=0;
                    sum++;
                }
            }
            else
            {
                b=0;
                sum++;
            }
        }

        if(a>0)
        {
            sum+=a/64;
            a%=64;
            if(a>0)
            {
                sum++;
                a=0;
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}
