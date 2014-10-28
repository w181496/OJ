#include<iostream>
using namespace std;
int main()
{
    double a,b;
    while(cin>>a)
    {
        b=0;
        int i;
        for(i=1;;++i)
        {
            b+=(1.0)/(i+1);
            if(b>=a)break;
        }
        cout<<i<<" card(s)"<<endl;
    }
    return 0;
}
