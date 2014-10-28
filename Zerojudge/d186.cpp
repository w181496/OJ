#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a,b,d=0,c;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)break;
        for(int t=a;t<=b;t++)
        {
            c=sqrt(t);
            if(c*c==t)
            {
                d++;
            }
        }
        cout<<d<<endl;
        d=0;
    }

    return 0;
}
