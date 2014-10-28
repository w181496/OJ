#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int r[6]={};
    int t;
    while(cin>>t,t)
    {
        r[t]++;
    }
    double c=0,d=0;
    for(int i=5;i>=1;--i)
    {
        c+=r[i]*i;
        d+=r[i];
        cout<<i<<" (";
        if(r[i]>9)cout<<r[i];
        else cout<<" "<<r[i];
        cout<<") |";
        for(int j=1;j<=r[i];++j)
            cout<<"=";
        cout<<endl;
    }
    cout<<"Average rating: "<<fixed<<setprecision(4)<<c/d<<endl;
    return 0;
}
