#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    int t=0,size;
    while(getline(cin,a))
    {
        size=a.size()-1;
        t='*'-a[0];
        for(int i=0;i<=size;i++)
        {
            b=a[i]+t;
            cout<<b;
        }
        cout<<endl;

    }


    return 0;
}
