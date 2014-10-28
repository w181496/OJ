#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
      vector<long long int>p(1); //建質數表
      p[0]=2;
      for(long long int i=3;i<=1200;i+=2)
      {
            bool chk=true;
            for(long long int j=3;j*j<=i;j+=2)
            {
                if(i%j==0)
                {
                    chk=false;
                    break;
                }
            }
            if(chk)p.push_back(i);
      }
      long long int n;
      while(scanf("%lld",&n)&&n!=0)
      {
          bool chk2=true;
          for(long long int i=0;n>=p[i]*p[i];++i)
          {
              if(n%p[i]==0)
              {
                  chk2=false;
                  break;
              }
          }
          if(n==1)chk2=false;
          chk2?printf("0\n"):printf("1\n");
      }
      return 0;
}
