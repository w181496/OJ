#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    int n,t[101];
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
            cin>>t[i];
        sort(t,t+n);
        cout<<t[n-1];
        for(int i=1;i<n-1;++i)cout<<" "<<t[i];
        cout<<" "<<t[0]<<endl;
    }
}