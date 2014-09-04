#include <iostream>

using namespace std;

int main()
{
    double h,u,d,f;
    while(cin >> h)
    {
        cin >> u >> d >> f;
        if(h==u&&u==d&&d==f&&f==0)
        break;
        bool j=false;
        double x=0,y=0;
        double r=f*u/100;
        while(true)
        {
            x+=u;
            ++y;
            if(x>h)
            {
                j=true;
                break;
            }
            x-=d;
            if(u>0)
            u-=r;
            else
            u=0;
            if(x<0)
            {
                break;
            }
        }
        if(j==true)
        {
            cout << "success on day " << y << endl;
        }
        else
        {
            cout << "failure on day " << y << endl;
        }
    }
    return 0;
}