#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,sum=0,avg,num;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>m;
        vector<int>k(m+1);
        k[0]=0;
        for(int j=1;j<=m;++j)
        {
            cin>>k[j];
            sum+=k[j];
        }
        avg=sum/2;
        vector<int>p((m+1)*(avg+1));
        for(int g=0;g<=m;++g)
        {
            for(int h=0;h<=avg;++h)
            {
                if(g==0||h==0)
                {
                    p[g*(avg+1)+h]=0;
                }
                else if(k[g]>h)
                {
                     p[g*(avg+1)+h]=p[(g-1)*(avg+1)+h];
                }
                else
                {
                    p[g*(avg+1)+h]=max(p[(g-1)*(avg+1)+h],p[(g-1)*(avg+1)+h-k[g]]+k[g]);
                }
            }
        }
        num=sum-p[(m+1)*(avg+1)-1];
        cout<<num-p[(m+1)*(avg+1)-1]<<endl;
        sum=0;
    }
    return 0;
}
