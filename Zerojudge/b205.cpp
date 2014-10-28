#include <iostream>

using namespace std;

int main()
{
    long long int a,n,sum=0;

    while(cin>>n)
    {
      for(int i=n;i>=1;i--)
      {
          cin>>a;
          start:
          if(a>=27)
          {
              sum=sum+(a-a%27)/27;
              if(a%27==0){
               sum--;
                a=1;
              }
              if(a%27!=0)
              a=a%27;
              goto start;
          }
          else if(27>a&&a>=9)
          {
              sum=sum+(a-a%9)/9;
              if(a%9==0)
              {
                 a=1;
                 sum--;
              }

              if(a%9!=0)
              a=a%9;
              goto start;
          }
          else if(9>a&&a>=3)
          {
              sum=sum+(a-a%3)/3;
             if(a%3==0){
                a=1;
                sum--;
             }
              if(a%3!=0)
              a=a%3;
              goto start;
          }
          else if(3>a&&a>=1)
          {
              sum=sum+(a-a%1)/1;
              cout<<sum<<endl;
          }
          sum=0;
      }
    }


    return 0;
}
