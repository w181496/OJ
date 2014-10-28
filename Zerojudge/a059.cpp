#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a,b;
    int c,d=0,e=1,f=0,g;

    cin>>g;

        for(int o=g;o>=1;o--)
        {
          while(cin>>a>>b)
            {
            if(a>b)
            {
                c=b;
                b=a;
                a=c;
            }
            for(int i=a;i<=b;i++)
            {
                f=sqrt(i);
                if(f*f==i)
                {
                    d+=i;
                }
            }
            cout<<"Case "<<e<<": "<<d<<endl;
            e++;
            d=0;

            }
        }



    return 0;
}
