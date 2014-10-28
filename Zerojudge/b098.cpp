#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b;
    string c,d;

    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        cin>>c;
        for(int t=0;t<=c.size()-1;t++)
        {
            if(c[t]-b>='A')
            {
                d=c[t]-b;
            }
            else
            {
                d=c[t]-b+26;
            }
            cout<<d;
        }
        cout<<endl;
    }


    return 0;
}
