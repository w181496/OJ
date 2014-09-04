#include <iostream>
using namespace std;
int main()
{
    long long int x;
    while(cin>>x)
    {
        if((x+5)%7==1)cout<<"Monday"<<endl;
        else if((x+5)%7==2)cout<<"Tuesday"<<endl;
        else if((x+5)%7==3)cout<<"Wednesday"<<endl;
        else if((x+5)%7==4)cout<<"Thursday"<<endl;
        else if((x+5)%7==5)cout<<"Friday"<<endl;
        else if((x+5)%7==6)cout<<"Saturday"<<endl;
        else if((x+5)%7==0)cout<<"Sunday"<<endl;
    }
    return 0;
}