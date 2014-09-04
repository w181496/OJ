#include<iostream>
#include<cstring>
#include<iomanip>
#include<algorithm>
#define ME tourist
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int l,m;
    l=(a-c>0?a-c:c-a);
    m=(b-d>0?b-d:d-b);
    if(l!=m&&l!=0&&m!=0)cout<<-1<<endl;
    else
    {
        int x=max(a,c);
        int y=max(b,d);
        if(l==0)
        {
            if(x+m<=1000)x+=m;
            else x-=m;
            cout<<x<<" "<<b<<" "<<x<<" "<<d<<endl;
        }
        else if(m==0)
        {
            if(y+l<=1000)y+=l;
            else y-=l;
            cout<<a<<" "<<y<<" "<<c<<" "<<y<<endl;
        }
        else
        {
            cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
        }
    }
    return 0;
}