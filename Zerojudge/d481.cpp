#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int m,w,x,n;
    while(cin>>m>>w>>x>>n)
    {
        if(w!=x)
        {
            cout<<"Error"<<endl;
            continue;
        }
        long long int k1[m][w];
        long long int k2[w][n];
        long long int k3[m][n];
        for(long long int i=0; i<m; ++i)
        {
            for(long long int j=0; j<n; ++j)
            {
                k3[i][j]=0;
            }
        }
        for(long long int i=0; i<m; ++i)
        {
            for(long long int j=0; j<w; ++j)
            {
                cin>>k1[i][j];
            }
        }
        for(long long int i=0; i<w; ++i)
        {
            for(long long int j=0; j<n; ++j)
            {
                cin>>k2[i][j];
            }
        }
        for(long long int i=0; i<m; ++i)
        {
            for(long long int j=0; j<n; ++j)
            {
                for(long long int k=0; k<w; ++k)
                {
                    k3[i][j]+=k1[i][k]*k2[k][j];
                }
            }
        }
        for(long long int i=0; i<m; ++i)
        {
            cout<<k3[i][0];
            for(long long int j=1; j<n; ++j)
            {
                cout<<" "<<k3[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
