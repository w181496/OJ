#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){

    double a;
    string c;

    while(cin>>a)
    {
       if(a>0)
       {
           cout<<fixed<<setprecision(4)<<"|"<<a<<"|="<<a<<endl;
       }
       else
       {
           cout<<fixed<<setprecision(4)<<"|"<<a<<"|="<<-a<<endl;
       }
    }

     return 0;
}
