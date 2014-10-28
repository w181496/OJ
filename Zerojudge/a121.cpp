#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b;
    int g=1,n=0;

    while(cin>>a>>b)
    {
        for(long long int i=a;i<=b;i++)
        {
            for(long long int t=2;t<=sqrt(i);t++)
            {
                if(i%t==0)
                {
                    g=0;
                    break;
                }
            }
            if(g==1)n++;
            g=1;
        }
        if(a==1)n--;
        cout<<n<<endl;
        n=0;
    }



    return 0;
}
