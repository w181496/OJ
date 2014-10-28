#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,W=100,now;
    while(cin>>n)
    {
        vector<int>w(n+1);
        vector<int>p(n+1);
        w[0]=0,p[0]=0;
        for(int i=1; i<=n; ++i)
            cin>>w[i]>>p[i];
        vector<int>k((W+1)*(n+1));
        vector<bool>c((W+1)*(n+1));
        for(int i=0; i<=n; ++i)
        {
            for(int j=0; j<=W; j++)
            {
                if(i==0||j==0)
                {
                    k[i*(W+1)+j]=0;
                }
                else if(w[i]>j)
                {
                    k[i*(W+1)+j]=k[(i-1)*(W+1)+j];
                }
                else
                {
                    k[i*(W+1)+j]=max(k[(i-1)*(W+1)+j],k[(i-1)*(W+1)+j-w[i]]+p[i]);
                }
            }
        }
        cout<<k[(W+1)*(n+1)-1]<<endl;
    }
    return 0;
}
