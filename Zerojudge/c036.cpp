#include <iostream>

using namespace std;

int main()
{
    double h,u,d,f;
    while(cin >> h>>u>>d>>f)
    {
        if(h==u&&u==d&&d==f&&f==0)
        break;
        double r=u*f/100;
        bool j=false;
        double x=0,y=0;
        while(true)
        {
            x+=u;
            ++y;
            if(x>h)
            {
                j=true;
                break;
            }
            if(u>0)
            u-=r;
            else
            u=0;
            x-=d;
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
