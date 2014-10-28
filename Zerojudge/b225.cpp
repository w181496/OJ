#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double x1,x2,x3,y1,y2,y3;
    cin>>n;
    while(n--)
    {
        double m1,m2,m3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        m1=(y2-y1)/(x2-x1);
        m2=(y3-y2)/(x3-x2);
        m3=(y3-y1)/(x3-x1);
        if((x2-x1==x3-y2)||(x3-x2==x3-x1)||(x3-x1==x2-x1))cout<<"NO"<<endl;
        else if((x1==x2&&y1==y2)||(x2==x3&&y2==y3)||(x1==x3&&y1==y3))cout<<"NO"<<endl;
        else if(m1==m2||m2==m3||m1==m3)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
