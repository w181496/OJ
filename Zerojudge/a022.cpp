#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int c=0,d=0,b;
    while(cin>>a)
    {
        b=a.size()-1;
        for(int i=0;i<=b;i++)
        {
            d=b-i;
            if(a[i]!=a[d])
            {
                cout<<"no"<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"yes"<<endl;
        c=0;
    }

    return 0;
}
