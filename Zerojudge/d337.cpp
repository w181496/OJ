#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
 char input[5000];
 while(gets(input))
   {
      int a,b,n=strlen(input);
      for(a=0;a<n;a++)
        if(input[a]>=256||input[a]<0)
          printf("%c",input[a]);
         printf("\n");
   }
  return 0;
}
