#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long int LL;
int prime[47000];
int main()
{
    int id=1,n,flag;
    prime[0]=2;
    for(LL i=3;i<47000;i+=2)
    {
        flag=1;
        for(int j=0;prime[j]*prime[j]<=i;j++)
        {
            if(i%prime[j]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)prime[id++]=i;
    }
    while(scanf("%d",&n)==1)
    {
        if(n<=prime[id-1])
        {
            int l=0,r=id-1,mid,flag2=1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(prime[mid]<n)
                {
                    l=mid+1;
                }
                else if(prime[mid]>n)
                {
                    r=mid-1;
                }
                else
                {
                    flag2=0;
                    break;
                }
            }
            if(flag2)puts("非質數");
            else puts("質數");
        }
        else
        {
            int flag2=1;
            for(LL i=0;(LL)prime[i]*prime[i]<=n;++i)
            {
                if(n%prime[i]==0)
                {
                    flag2=0;
                    break;
                }
            }
            if(flag2)puts("質數");
            else puts("非質數");
        }
    }
    return 0;
}

