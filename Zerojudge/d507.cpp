#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;

    while(cin>>a>>b>>c)
    {
      if(a>=b&&b>=c)
      {
          if(b*b+c*c>a*a)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(b*b+c*c==a*a)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }
      else if(a>=c&&c>=b)
      {
          if(b*b+c*c>a*a)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(b*b+c*c==a*a)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }
      else if(b>=a&&a>=c)
      {
          if(a*a+c*c>b*b)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(a*a+c*c==b*b)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }
      else if(b>=c&&c>=a)
      {
          if(a*a+c*c>b*b)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(a*a+c*c==b*b)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }
      else if(c>=a&&a>=b)
      {
          if(a*a+b*b>c*c)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(a*a+b*b==c*c)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }
      else if(c>=b&&b>=a)
      {
          if(a*a+b*b>c*c)
          {
              cout<<"acute triangle"<<endl;
          }
          else if(a*a+b*b==c*c)
          {
              cout<<"right triangle"<<endl;
          }
          else
          {
              cout<<"obtuse triangle"<<endl;
          }
      }

    }

    return 0;
}
