#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a,int b)
 {
  int temp;
  while(a%b)
   {
    temp=a;
    a=b;
    b=temp%b;
   }
   return b;
 }
main()
{
 int x[50];
 int a,b,c,n,m;
 while(scanf("%d",&n)==1&&n!=0)
  {
   for(a=0;a<n;a++)
    {
     scanf("%d",&m);
     x[a]=m;
    }
   int math=0;
   for(a=0;a<n;a++)
    {
     for(b=a+1;b<n;b++)
      {
       if(gcd(x[a],x[b])==1)
        math++;
      }
    }
   if(math==0)
    printf("No estimate for this data set.\n");
   else
    {
     double pi;
     pi=sqrt((double)6*(n*(n-1)/2)/math);
     printf("%.6lf\n",pi);
    }
  }
 return 0;
}