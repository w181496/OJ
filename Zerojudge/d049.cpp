#include <iostream>

using namespace std;

int main()
{
   int y;
   while(cin>>y)
   {
        if(1912<=y&&y<=2147483647)
        {
        y=y-1911;
        cout<<y<<endl;
        }
   }


 return 0;
}
