#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int a,b,c,d,e=0,f=0,a1,b1;
    while(cin>>a>>b)
    {
        a1=a;b1=b;
        if(a>b)
        {
            c=a;
            a=b;
            b=c;

        }
        for(int i=a;i<=b;i++)
        {
            e=0;
            d=i;
abc:
            e++;
            if(e>f)f=e;
            if(d==1)continue;
            if(d%2==1)
            {
                d=3*d+1;
            }
            else
            {
                d=d/2;
            }
            goto abc;
        }
        cout<<a1<<" "<<b1<<" "<<f<<endl;
        f=0;e=0;

    }
    return 0;

}
