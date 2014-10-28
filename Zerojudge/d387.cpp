#include <cstdio>
int prime[1000000]={1,1,0};
int change(int n)
{
    int ans=0;
    while(n>0)
    {
        ans=ans*10+n%10;
        n/=10;
    }
    return ans;
}
main()
{
   for(long long int i=4;i<999999;i+=2)prime[i]=1;
   for(long long int i=3;i<999999;i+=2)
   {
       if(!prime[i])
           for(long long int j=i*i;j<999999;j+=i)
                prime[j]=1;
   }
   int n;
   while(scanf("%d",&n)==1)
   {
       if(prime[n])printf("%d is not prime.\n",n);
       else if((!prime[n]&&prime[change(n)])||(!prime[n]&&!prime[change(n)]&&change(n)==n))printf("%d is prime.\n",n);
       else printf("%d is emirp.\n",n);
   }
}
