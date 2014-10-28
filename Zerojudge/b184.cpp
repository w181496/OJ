#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int k;
    while(cin>>k)
    {
        vector<int>v(k+1); //體積
        vector<int>c(k+1); //利潤
        vector<int>n((k+1)*101);
        for(int i=1;i<=k;i++)
        {
            cin>>v[i]>>c[i];
        }
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<=100;j++)
            {
                if(i==0)
                {
                    n[i*101+j]=0;
                }
                else if(v[i]>j)
                {
                    n[i*101+j]=n[(i-1)*101+j];
                }
                else
                {
                    n[i*101+j]=max(n[(i-1)*101+j],n[(i-1)*101+j-v[i]]+c[i]);
                }
            }
        }
        cout<<n.back()<<endl;
    }
     return 0;
}
