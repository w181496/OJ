#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        for(int i=1;i<=m;++i)
        {
            int sum=0;
            vector<int>k(n);
            for(int j=0;j<n;++j)
            {
                cin>>k[j];
                sum+=k[j];
            }
            if(sum%2!=0)
            {
                cout<<"No"<<endl;
                continue;
            }
            else
            {
                int W=sum/2;
                vector<int>w((W+1)*(n+1));
                for(int j=0;j<=n;++j)
                {
                    for(int q=0;q<=W;q++)
                    {
                        if(q==0||j==0)
                        {
                            w[j*(W+1)+q]=0;
                        }
                        else if(k[j]>q)
                        {
                            w[j*(W+1)+q]=w[(j-1)*(W+1)+q];
                        }
                        else
                        {
                            w[j*(W+1)+q]=max(w[(j-1)*(W+1)+q],w[(j-1)*(W+1)+q-k[j]]+k[j]);
                        }
                    }
                }
                if(w[(W+1)*(n+1)-1]!=W)
                {
                    cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
            }
        }
    }
    return 0;
}