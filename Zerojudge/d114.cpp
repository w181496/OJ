#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int>n(7000);
    n[0]=1;
    int size=1;
    for(int i=2; i<=100; ++i)
    {
        for(int j=2; j<=i; ++j)
        {
            for(int k=0; k<size; ++k)
            {
                n[k]*=j;
            }
            for(int k=0; k<size; ++k)
            {
                n[k+1]+=n[k]/10;
                n[k]%=10;
                if(k==size-1&&n[size]>0)
                {
                    size++;
                }
            }
        }
    }
    for(int i=size-1; i>=0; --i)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}
