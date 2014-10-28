#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int dp(int ,int *);
main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int c[n],e[n];
        for(int i=0;i<n;++i)
            cin>>c[i]>>e[i];
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(e[j]>e[i])
                {
                    e[i]+=e[j];
                    e[j]=e[i]-e[j];
                    e[i]-=e[j];
                    c[i]+=c[j];
                    c[j]=c[i]-c[j];
                    c[i]-=c[j];
                }
            }
        }
        int cook=c[0],total=e[0]+c[0];
        for(int i=1;i<n;++i)
        {
            if(cook+c[i]+e[i]>total)total=cook+c[i]+e[i];
            cook+=c[i];
        }
        cout<<total<<endl;
    }
}
