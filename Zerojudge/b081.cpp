#include <iostream>

using namespace std;

int main()
{
    long long int a,sum=0,sum2=0;

    while(cin>>a)
    {
        if(a==0)break;
        for(int i=1;i<a;i++)
            if(a%i==0)
                sum+=i;
        for(int r=1;r<sum;r++)
             if(sum%r==0)sum2+=r;
        if(sum2==a&&sum!=sum2)
        {
            cout<<sum<<endl;
        }
        else if(sum2==sum)
        {
            cout<<"="<<sum2<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        sum=0;sum2=0;
    }
}
