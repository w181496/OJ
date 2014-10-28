#include <iostream>

using namespace std;

int main()
{
    int n,s;

    while(cin>>n)
    {
        s=0;
        for(int i=1;i<=n-1;i++)
        {
            if(n%i==0)
            {
                s+=i;
            }
        }
        if(s>n)
        {
            cout<<"盈數"<<endl;
        }
        else if(s<n)
        {
            cout<<"虧數"<<endl;
        }
        else if(s==n)
        {
            cout<<"完全數"<<endl;
        }
    }



    return 0;
}
