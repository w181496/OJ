#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,t;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        int k[t];
        int k2[t];
        cin>>k[0]>>k2[0];
        int max=k[0]*60+k2[0],max_t=0,sum=k[0]*60+k2[0];
        for(int j=1;j<t;j++)
        {
            cin>>k[j]>>k2[j];
            if(k[j]*60+k2[j]<max)
            {
                max=k[j]*60+k2[j];
                max_t=j;
            }
            sum+=k[j]*60+k2[j];
        }
        cout<<"Track "<<i<<":"<<endl;
        cout<<"Best Lap: "<<k[max_t]<<" minute(s) "<<k2[max_t]<<" second(s)."<<endl;
        cout<<"Average: "<<sum/60/t<<" minute(s) "<<(sum/t)%60<<" second(s)."<<endl;
    }
    return 0;
}
