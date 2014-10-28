#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    int x1,x2,y1,y2;
    int a,b,t;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin>>x1>>y1>>x2>>y2;
        a=x2-x1;
        b=y2-y1;
        if(b>a)
        {
            a+=b;
            b=a-b;
            a-=b;
        }
        if(a<0)a*=-1;
        if(b<0)b*=-1;
        if(a==0)
        {
            cout<<b+1<<endl;
        }
        else if(b==0)
        {
            cout<<a+1<<endl;
        }
        else
        {
            while(a%b!=0)
            {
                t=a%b;
                a=b;
                b=t;
            }
            cout<<b+1<<endl;
        }

    }
    return 0;
}
