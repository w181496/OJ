#include <iostream>

using namespace std;

int main()
{
    long long int a,b=0,c=0,d;
    while(cin>>a)
    {
        if(a==0)
            break;
        for(int i=a;i>=1;i--)
        {
            cin>>b;
            if(c==0)
                c=b;
            for(int u=1;u>=1;u++)
            {
                if((b*u)%c==0)
                {
                    d=b*u;
                    c=d;
                    break;
                }
            }
        }
        cout<<d<<endl;
        c=0;
    }

    return 0;
}
