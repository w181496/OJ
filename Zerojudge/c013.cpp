#include <iostream>

using namespace std;

int main()
{
    int a,c,d;
    int i=1;

    while(cin>>d)
    {
        cout<<endl;
        while(d>=1)
        {
            cin>>a>>c;
            for(int u=c;u>=1;u--)
      {
              for(i=1;i<=a;i++)
       {
           for(int x=1;x<=i;x++)
           {
               cout<<i;
           }
           cout<<endl;
       }
       for(i=a-1;i>=1;i--)
       {
           for(int x=1;x<=i;x++)
           {
               cout<<i;
           }
           cout<<endl;
       }
       cout<<endl;
      }


            d--;
        }


    }

    return 0;
}
