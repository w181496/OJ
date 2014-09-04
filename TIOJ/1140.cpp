#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double r,g,b;
    double x,y,z,sum=0;
    int n;
    while(cin>>n)
    {
        double avg[n*n];
        for(int i=0;i<n*n;++i)
            avg[i]=0;
        for(int i=0;i<n;++i)
        {
            for(int j=1;j<=n;++j)
            {
                cin>>r>>g>>b;
                x=0.5149*r+0.3244*g+0.1607*b;
                y = 0.2654 * r + 0.6704 * g + 0.0642 * b;
                z = 0.0248 * r + 0.1248 * g + 0.8504 * b;
                sum+=y;
                cout<<fixed<<setprecision(4)<<x<<" "
                    <<fixed<<setprecision(4)<<y<<" "
                    <<fixed<<setprecision(4)<<z<<endl;
            }
        }
        cout<<"The average of Y is "<<fixed<<setprecision(4)<<sum/(n*n)<<endl;
        sum=0;
    }
     return 0;
}