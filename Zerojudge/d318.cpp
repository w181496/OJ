#include <iostream>

using namespace std;

int main()
{
    int N,a[1000]={0},t=1,N_copy;

    while(cin>>N)
    {
        if(N<0)break;
        while(N>=0)
        {
            N_copy=N;
            a[t]=N%3;
            N=N/3;
            if(N<=2)
            {
                a[0]=N;
                N=-1;
            }
            t++;
        }
        if(N_copy>=3)
        cout<<a[0];
        for(int i=t-1;i>=1;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
        t=1;
    }
}
