#include <iostream>

using namespace std;

int main()
{
    long long int n=0,a=0;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n==0)
        {

            cout<<"END OF OUTPUT"<<endl;
             break;
        }
              for(int i=1;i<=n/2;i++)
      {
          if(n%i==0)
          {
              a+=i;
          }
      }
      if(a==n)
      {
          cout<<n<<"  PERFECT"<<endl;
      }
      else if(a<n)
      {
          cout<<n<<"  DEFICIENT"<<endl;
      }
      else if(a>n)
      {
          cout<<n<<"  ABUNDANT"<<endl;
      }
      a=0;

    }

    return 0;
}
