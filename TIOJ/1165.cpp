#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b>>c)
    {
      if(a+b==c)
      {
          cout<<"Good Pair"<<endl;
      }
      else if(a+c==b)
      {
          cout<<"Good Pair"<<endl;
      }
      else if(b+c==a)
      {
          cout<<"Good Pair"<<endl;
      }
      else
      {
          cout<<"Not Good Pair"<<endl;
      }
    }



    return 0;
}