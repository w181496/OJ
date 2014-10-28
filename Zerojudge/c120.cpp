#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>k(6000);
        k[0]=1;
        int size=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<size;++j)
            {
                k[j]*=i;
            }
            for(int j=0;j<size;++j)
            {
                if(k[j]>9)
                {
                    k[j+1]+=k[j]/10;
                    k[j]%=10;
                }
                if(j==size-1&&k[size]>0)
                {
                    size++;
                }
            }
        }
        cout<<n<<"!"<<endl;
        for(int i=size-1;i>=0;i--)
        {
            cout<<k[i];
        }
        cout<<endl;
    }
    return 0;
}
