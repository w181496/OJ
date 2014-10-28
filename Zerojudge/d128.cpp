#include <iostream>

using namespace std;

int main()
{
    long long int b=0,a=0,c=0,x=0;
    long long int d,e,f,g,h,i,j,k;
    while(cin>>a>>b>>c)
    {
      d=a+b+c;
      e=(10*a+b)*c;
      f=a+10*b+c;
      g=a*(10*b+c);
      h=10*a+b+c;
      i=a+b*c;
      j=a*b+c;
      k=a*b*c;
      x=d;
      if(e>d)
        x=e;
      if(f>x)
      x=f;
      if(g>x)
      x=g;
      if(h>x)
      x=h;
      if(i>x)
      x=i;
      if(j>x)
      x=j;
      if(k>x)
      x=k;
      cout<<x<<endl;
    }

    return 0;
}
