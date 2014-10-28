#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a,b,c,d,e=1;
    while(cin>>d)
    {
        for(int i=d;i>=1;i--)
        {
            cin>>a>>b>>c;
            if(a>b&&b>c)
            {
                cout<<"Case "<<e<<": "<<b<<endl;
                e++;
            }
            else if(a>c&&c>b)
            {
                cout<<"Case "<<e<<": "<<c<<endl;
                e++;
            }
            else if(b>a&&a>c)
            {
                cout<<"Case "<<e<<": "<<a<<endl;
                e++;
            }
            else if(b>c&&c>a)
            {
                cout<<"Case "<<e<<": "<<c<<endl;
                e++;
            }
            else if(c>a&&a>b)
            {
                cout<<"Case "<<e<<": "<<a<<endl;
                e++;
            }
            else if(c>b&&b>a)
            {
                cout<<"Case "<<e<<": "<<b<<endl;
                e++;
            }
            else
            {
                cout<<"Case "<<e<<": "<<c<<endl;
                e++;
            }
        }
        e=1;
    }

    return 0;
}
