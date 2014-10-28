#include <iostream>

using namespace std;

int main()
{
    long long int a,b=0,c=0,d=0,e=0,f=0;
    while(cin>>a>>b)
    {
        if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        for(int i=30;i>=1;i--)
        {
            cin>>d;
            if(d==a&&e!=2)
            {
                e=1;
            }
            else if(d>0&&e!=2&&e!=1)
            {
                f++;
            }
            else if(f>=3)
            {
                e=2;
            }
        }
        if(e==0||e==2)
        {
            cout<<"N"<<endl;
        }
        else if(e==1)
        {
            cout<<"Y"<<endl;
        }
        e=0;f=0;
    }

    return 0;
}
