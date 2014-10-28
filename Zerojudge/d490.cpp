#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,sum=0;

    while(cin>>a>>b)
    {
        if(a>b)
        {
            if(b%2==0)
            {
                c=b;
                if(a%2==0)
                {
                     d=a;
                }
                else
                {
                    d=a-1;
                }
            }
            else
            {
                c=b+1;
                if(a%2==0)
                {
                  d=a;
                }
                else{
                  d=a-1;
                }
            }
            sum=0;
            for(int x=c;x<=d;x=x+2)
            {
                sum+=x;
            }
        }
        else
        {
          if(b%2==0)
            {
                c=b;
                if(a%2==0)
                {
                     d=a;
                }
                else
                {
                    d=a+1;
                }
            }
            else
            {
                c=b-1;
                if(a%2==0)
                {
                  d=a;
                }
                else{
                  d=a+1;
                }
            }
            sum=0;
      for(int i=d;i<=c;i=i+2)
        {
            sum+=i;
        }
    }

      cout<<sum<<endl;
    }
    return 0;
}
