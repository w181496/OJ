#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        double s=a*e-b*d,sx=c*e-b*f,sy=a*f-c*d;
        if(sx==0&&sy==0)
        {
            cout<<"Too many"<<endl;
        }
        else if(s==0&&sx!=0&&sy!=0)
        {
            cout<<"No answer"<<endl;
        }
        else
        {
            cout<<"x="<<fixed << setprecision(2)<<sx/s<<endl;
            cout<<"y="<<fixed << setprecision(2)<<sy/s<<endl;
        }
    }
    return 0;
}
