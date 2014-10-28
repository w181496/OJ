#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    int x=0,y=0,c=0;

    while(cin>>a>>b)
    {
      if(a=="Scissors"&&b=="Stone")
      {
          cout<<"靈夢獲勝"<<endl;
          x++;
      }
      else if(a=="Scissors"&&b=="Paper")
      {
          y++;
          cout<<"紫獲勝"<<endl;
      }
      else if(a=="Stone"&&b=="Scissors")
      {
          y++;
          cout<<"紫獲勝"<<endl;
      }
      else if(a=="Stone"&&b=="Paper")
      {
          x++;
          cout<<"靈夢獲勝"<<endl;
      }
      else if(a=="Paper"&&b=="Scissors")
      {
          x++;
          cout<<"靈夢獲勝"<<endl;
      }
      else if(a=="Paper"&&b=="Stone")
      {
          y++;
          cout<<"紫獲勝"<<endl;
      }
      else if(a=="Game Over")
      {
          c++;
          break;
      }

    }
      if(x>y&&c!=0)
      {
          cout<<"悲慘的籌措起香油錢"<<endl;
      }
      else 
      {
          cout<<"螢火的蹤跡"<<endl;
      }


    return 0;
}
