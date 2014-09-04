#include <iostream>
#include <string>
using namespace std;

void check(int);

int main()
{
    int n;
    while(cin >> n)
    {
        check(n%20);
    }
    return 0;
}

void check(int n)
{
    if(n==0)
        cout<<"(10,5)"<<endl;
    else if(n==1)
        cout<<"(15,6)"<<endl;
    else if(n==2)
        cout<<"(15,12)"<<endl;
    else if(n==3)
        cout<<"(12,15)"<<endl;
    else if(n==4)
        cout<<"(6,15)"<<endl;
    else if(n==5)
        cout<<"(5,10)"<<endl;
    else if(n==6)
        cout<<"(6,5)"<<endl;
    else if(n==7)
        cout<<"(12,5)"<<endl;
     else if(n==8)
        cout<<"(15,8)"<<endl;
     else if(n==9)
        cout<<"(15,14)"<<endl;
     else if(n==10)
        cout<<"(10,15)"<<endl;
     else if(n==11)
        cout<<"(5,14)"<<endl;
     else if(n==12)
        cout<<"(5,8)"<<endl;
     else if(n==13)
        cout<<"(8,5)"<<endl;
     else if(n==14)
        cout<<"(14,5)"<<endl;
    else if(n==15)
        cout<<"(15,10)"<<endl;
    else if(n==16)
        cout<<"(14,15)"<<endl;
    else if(n==17)
        cout<<"(8,15)"<<endl;
    else if(n==18)
        cout<<"(5,12)"<<endl;
    else if(n==19)
        cout<<"(5,6)"<<endl;
}