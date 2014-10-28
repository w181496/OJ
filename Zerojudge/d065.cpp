#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b>>c)
    {
        if(a<0||b<0||c<0)
        {

        }
        else
        {
        if(a>b&&a>c)
        {
            cout<<a<<endl;
        }
        else if(b>a&&b>c)
        {
            cout<<b<<endl;
        }
        else if(c>a&&c>b)
        {
            cout<<c<<endl;
        }
        else if(a==b&&a>c)
        {
            cout<<a<<endl;
        }
        else if(a==b&&a<c)
        {
            cout<<c<<endl;
        }
        else if(a==c&&a>b)
        {
            cout<<a<<endl;
        }
        else if(a==c&&a<b)
        {
            cout<<b<<endl;
        }
        else if(b==c&&a>b)
        {
            cout<<a<<endl;
        }
        else if(b==c&&a<b)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
        }
    }

    return 0;
}
