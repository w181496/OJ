#include <iostream>

using namespace std;

int main()
{
    long long int a,t=1,r=0;

    while(cin>>a)
    {
        for(int i=2;i<=a;i++)
        {
            if(a%i==0)
            {
                if(r==1)cout<<" * ";
                cout<<i;
                a/=i;
                r=1;
            }
            while(a%i==0)
            {
                a/=i;
                t++;
            }
            if(t>1)cout<<"^"<<t;
            t=1;

        }
        cout<<endl;
        t=1;r=0;
    }
}
