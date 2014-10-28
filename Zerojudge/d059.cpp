#include <iostream>
#include <cmath>
#include<iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    double a,b,c=1;
    int d,e,f;

    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        c*=a;
    }
    cout<<c<<endl;
    cin>>a;
    cout<< fixed << setprecision(3) <<sqrt(a)<<endl;
    cin>>d;
    if(d<0)
    {
        cout<<-d<<endl;
    }
    else
    {
        cout<<d<<endl;
    }
    cin>>e>>f;
    cout<<rand()%(f-e)+e<<endl;

    return 0;
}
