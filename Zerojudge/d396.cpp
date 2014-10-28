#include<stdio.h>
#include<stdlib.h>
int num[20],line[20]={0},prime[32]={0};
int n,sum;
void make (int k)
{
  int a;
  if(k>sum)
    {
      if(prime[line[1]+line[k-1]]==0)
      {
       for(a=1;a<=sum-1;a++)
         printf("%d ",line[a]);
        printf("%d\n",line[a]);
      }
        return;
    }
  else
    {
      for(a=2;a<=n;a++)
        if(num[a]>0)
          {
            num[a]--;
            line[k]=a;
            if(prime[line[k]+line[k-1]]==0)
               make(k+1);
            num[a]++;
          }
    }
}
void Prime()
{
  int a,b;
  for(a=2;a<=31;a++)
     if(prime[a]==0)
       for(b=2;a*b<31;b++)
         prime[a*b]=1;

}
main()
{
 line[1]=1;
 Prime();
 int time=0;
 while(scanf("%d",&n)==1)
  {
    sum=n;
    if(time>0) printf("\n");
    int a;
    for(a=2;a<=n;a++)   num[a]=1;
    printf("Case %d:\n",++time);
    make (2);
  }
 return 0;
}
