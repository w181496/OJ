#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main()
{
 int a,b,c,temp;
 while(scanf("%d %d %d",&a,&b,&c)==3&&(a!=0&&b!=0&&c!=0))
  {
   while(a%b)
    {
    temp=a;
    a=b;
    b=temp%b; 
    }        
   if(c%b==0)
    printf("Yes\n");
   else
    printf("No\n");            
  }    
 return 0;      
}
