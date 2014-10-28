#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=0,c=0,sum=0,d=1;

    while(cin>>a)
    {
        for(int i=a;i>=1;i--)
        {
            cin>>b>>c;
            if(b%2==0)
            {
                b++;
                for(int i=b;i<=c;i=i+2)
                {
                    sum+=i;
                }
            }
            else
            {
                for(int i=b;i<=c;i=i+2)
                {
                    sum+=i;
                }
            }
            if(d<=a)
            {
                cout<<"Case "<<d<<": "<<sum<<endl;
                d++;
            }
            sum=0;

        }

    }


    return 0;
}
