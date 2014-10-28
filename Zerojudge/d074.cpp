#include <iostream>

using namespace std;

int main()
{

    int a=0,b=0,c=0,i=0;

    while(cin>>a)
    {
        for(i=1;i<=a;i++)
        {
            cin>>b;
            if(b>c)
            {
                c=b;
            }
            else if(c>b)
            {

            }
        }
        cout<<c<<endl;
        c=0;
    }

    return 0;
}
