//沒意義的怪題目...

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
        if(n==0)
            break;
        else if(n==2||n==3||n==5||n==7||n==13||n==17||n==19||n==31||n==61||n==89||n==107||n==127||n==521||n==607||n==1279||n==2203||n==2281||n==3217||n==4253||n==4423||n==9689||n==9941||n==11213||n==19937||n==21701||n==23209||n==44497||n==86243||n==110503||n==132049||n==216091||n==756839||n==859433||n==1257787||n==1398269)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    return 0;
}
