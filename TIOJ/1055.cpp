#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        if(b>a)
        {
           for(int i=0;i<=b-a;++i)
           {
               for(int j=1;j<=a+i;++j)
               {
                   cout<<"*";
               }
               cout<<endl;
           }
        }
        else
        {
            for(int i=0;i<=a-b;++i)
           {
               for(int j=1;j<=a-i;++j)
               {
                   cout<<"*";
               }
               cout<<endl;
           }
        }
    }
    return 0;
}