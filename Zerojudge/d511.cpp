#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0,d=5,e=0;

    while(d>0)
    {
        d--;
       cin>>a>>b>>c;
       if(a>=b&&b>=c)
       {
           if(c+b>a&&a-c<b)
           {
               e++;
           }
       }
       else if(a>=c&&c>=b)
       {
           if(c+b>a&&a-b<c)
           {
               e++;
           }
       }
       else if(b>=a&&a>=c)
       {
           if(a+c>b&&b-c<a)
           {
               e++;
           }
       }
       else if(b>=c&&c>=a)
       {
           if(c+a>b&&b-a<c)
           {
               e++;
           }
       }
       else if(c>=a&&a>=b)
       {
           if(a+b>c&&c-b<a)
           {
               e++;
           }
       }
       else if(c>=b&&b>=a)
       {
           if(b+a>c&&c-a<b)
           {
               e++;
           }
       }
       else if(a==b&&b==c)
       {
           e++;
       }




    }
        cout<<e<<endl;

    return 0;
}
