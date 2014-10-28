#include <iostream>
#include <algorithm>
using namespace std;
struct poker
{
    char flower;
    int point;
};
bool compare(poker a,poker b)
{
    if(a.point<b.point)return false;
    if(a.point==b.point)
    {
        if(a.flower<b.flower)return false;
    }
    return true;
}
int main()
{
    int n,t;
    while(cin>>n)
    {
        poker p[n];
        for(int i=0;i<n;++i)
            cin>>p[i].flower>>p[i].point;
        cin>>t;
        sort(p,p+n,compare);
        cout<<p[t-1].flower<<" "<<p[t-1].point<<endl;
    }
    return 0 ;
}
