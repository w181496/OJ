#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<"primes between 1 ~ "<<n<<": ";
        if(n>1)cout<<2;
        else cout<<"none";
        for(int i=3;i<=n;i++)
        {
            int t=0;
            for(int j=2;j<=sqrt(i);++j)
            {
                if(i%j==0)
                {
                    t=1;
                    break;
                }
            }
            if(t==0)cout<<" "<<i;
        }
        cout<<endl;

    }
    return 0;
}