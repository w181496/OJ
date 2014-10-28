#include <iostream>

using namespace std;

int main()
{
    long long int a[10],b,i=0,d=0;

    while(i<10)
    {
        cin>>a[i];
        i++;
    }
    cin>>b;
    for(int t=0;t<=9;t++)
    {
        if(b+30>=a[t])
            d++;
    }
    cout<<d<<endl;
    d=0;
    i=0;

    return 0;
}
