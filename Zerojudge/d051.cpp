#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   double a;   
   while(cin>>a)          
      {
      cout<< fixed << setprecision(3) <<(a-32)*5/9<<endl;  
      }
   return 0;
}
