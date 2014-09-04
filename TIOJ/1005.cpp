#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0)break;
        long long int k[n],s;
        for(long long int i=0;i<n;i++)
         {
             cin>>s;
             k[i]=s;
         }
        long long int t=n*(n-1)/2;
        long long int sum=t;
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=i+1;j<n;j++)
            {
                for(long long int l=2;l<=k[i]&&l<=k[j];l++)
                    if(k[j]%l==0&&k[i]%l==0)sum--;
            }
        }
        if(sum<1)
        {
            cout<<"No estimate for this data set."<<endl;
            continue;
        }
        double r=sqrt((double)t*6/sum);
        long long int c2=r*10000000;
        if(c2%10>4)
            cout<< fixed << setprecision(6)<<r<<endl;
        else
            cout<< fixed << setprecision(6)<<r<<endl;
    }
    return 0;
}