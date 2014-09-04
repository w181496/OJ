#include <iostream>

using namespace std;

int main()
{
    int h1,m1,h2,m2;

    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;
        }
        else if(h2>h1)
        {
            cout<<h2*60+m2-h1*60-m1<<endl;
        }
        else if(h2<h1)
        {
            cout<<1440-h1*60-m1+h2*60+m2<<endl;
        }
        else if(h1==h2)
        {
            if(m1>m2)
            {
                cout<<1440-h1*60-m1+h2*60+m2<<endl;
            }
            else if(m1<m2)
            {
                cout<<h2*60+m2-h1*60-m1<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }

    return 0;
}
