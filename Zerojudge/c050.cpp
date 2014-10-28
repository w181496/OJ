#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;
vector<int>prime(1);
bool check(int );
int main()
{
    prime[0]=2;
    for(int i=3;i<1000;i+=2)
    {
        bool chk=true;
        for(int j=3,k=sqrt(i);j<=k;j+=2)
        {
            if(i%j==0)
            {
                chk=false;
                break;
            }
        }
        if(chk)prime.push_back(i);
    }
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        bool chk=true;
        for(int i=0;i<prime.size()&&chk;++i)
        {
                if(i>prime.size()/2)
                {
                    printf("Goldbach's conjecture is wrong.\n");
                    chk=false;
                }
                else if(check(n-prime[i]))
                {
                    printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
                    chk=false;
                }
        }
    }
    return 0;
}
bool check(int n)
{
    if(n==1)return false;
    for(int i=0,j=sqrt(n);prime[i]<=j;++i)
        if(n%prime[i]==0)return false;
    return true;
}
