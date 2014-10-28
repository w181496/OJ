#include <stdio.h>
#include <math.h>
#define SIZE_a 100000
int main(void)
{
  int N;
  int up=1,bottom=1;
  int now_left,now_right,prev_left,prev_right;
  int flag,limit;
  int i,n;
  while(scanf("%d",&N)==1)
  {
    if(!N)  break;
    n=(int)(floor(sqrt(N))+0.5);
    if((n%2)==0)
    {
      prev_left=n;
      prev_right=1;
      up=n;
      bottom=1;
      flag=6;
      now_left=prev_left;
      now_right=prev_right;
    }
    else
    {
      prev_left=1;
      prev_right=n;
      up=n;
      bottom=1;
      flag=3;
      now_left=prev_left;
      now_right=prev_right;
    }
    limit=N-n*n;
    for(i=0; i<limit; ++i)
    {
      now_left=prev_left;
      now_right=prev_right;
      if(flag==1)
      {
        if(now_left==up)
        {
          now_right+=1;
          if(now_right==up)
            flag=2;
        }
      }
      else if(flag==2)
      {
        if(now_right==up)
        {
          now_left-=1;
          if(now_left==bottom)
            flag=3;
        }
      }
      else if(flag==3)
      {
        if(now_left==bottom)
        {
          now_right+=1;
          up+=1;
          if(now_right==up)
            flag=4;
        }
      }
      else if(flag==4)
      {
        if(now_right==up)
        {
          now_left+=1;
          if(now_left==up)
            flag=5;
        }
      }
      else if(flag==5)
      {
        if(now_left==up)
        {
          now_right-=1;
          if(now_right==bottom)
            flag=6;
        }
      }
      else if(flag==6)
      {
        if(now_right==bottom)
        {
          now_left+=1;
          up+=1;
          if(now_left==up)
            flag=1;
        }
      }
      prev_left=now_left;
      prev_right=now_right;
    }
    printf("%d %d\n",now_left,now_right);
  }
  return 0;
}
