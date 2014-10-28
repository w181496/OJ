#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;

    while(cin>>a>>b)
    {
        if(a>b)
        {
            if(b%2==0)
            {
                for(int i=b;i<=a;i=i+2)
                {
                    c+=i;
                }
            }
            else
            {
                b++;
                for(int i=b;i<=a;i=i+2)
                {
                    c+=i;
                }
            }

        }
        else
        {
            if(a%2==0)
            {
                for(int i=a;i<=b;i=i+2)
                {
                    c+=i;
                }
            }
            else
            {
                a++;
                for(int i=a;i<=b;i=i+2)
                {
                    c+=i;
                }
            }
        }
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
