#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int k[n];
        for(int i=0; i<n; ++i)
            cin>>k[i];
        sort(k,k+n);
        cout<<k[0];
        for(int i=1; i<n; ++i)
            cout<<" "<<k[i];
        cout<<endl;
    }

    return 0;
}