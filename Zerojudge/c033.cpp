#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k,n;

    while(cin>>k>>n)
    {

        vector<int>num(0);
        num.push_back(1);
        int t=1,l=0;
        for(int j=2; j<=k; ++j)
        {
            for(int i=2; i*i<=j; ++i)
            {
                if(j%i==0)
                {
                    l=1;
                    break;
                }
            }
            if(l==0)
            {
                t++;
                num.push_back(j);
            }
            l=0;
        }
         cout<<k<<" "<<n<<":";
        if(t<n)
        {
             for(int i=0;i<t;i++)
             {
                 cout<<" "<<num[i];
             }
             cout<<endl;
        }
        else if(t%2==0)
        {
            for(int i=(t-2*n)/2;i<(t-2*n)/2+2*n;i++)
            {
               cout<<" "<<num[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=(t-(2*n-2))/2;i<=(t+(2*n-2))/2;i++)
            {
               cout<<" "<<num[i];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
