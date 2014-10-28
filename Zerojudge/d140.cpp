#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int a,b;
    char ch;
    while(cin>>a>>ch>>b)
    {
        int t=(a*100+b)*10;
        if(t>=10&&t<=100000)
        {
            t=t*9/10;
            t+=8000;
        }
        else if(t>=100010&&t<=500000)
        {
            t=t*4/5;
        }
        else
        {
            t=t*3/5;
        }
        cout<<"$"<<t/1000<<"."<<(t%1000)/100<<(t%100)/10<<endl;
    }
}
