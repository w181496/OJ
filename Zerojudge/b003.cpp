#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
  int k;
  while(scanf("%d",&k)==1)
      {
         k=abs(k);
         int n=(int)sqrt(k);
         for(;;n++)
             if(n*(n+1)/2>=k&&(k-n*(n+1)/2)%2==0) {printf("%d\n",n);break;}
      }
  return 0;
}
