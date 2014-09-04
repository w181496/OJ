#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t, a, b, i;
    while(cin >> n)
    {
        int k[n];
        for(i=0; i<n; ++i)
            cin>>k[i];
        cin>>t;
        for(i=1; i<=t; ++i)
        {
            int ss;
            cin >> a >> b;
            ss=k[a];
            k[a]=k[b];
            k[b]=ss;
        }
        if(n>=0)
            cout<<k[0];
        for(int i=1; i<n; i++)
            cout<<" "<<k[i];
        cout<<endl;
    }
    return 0;
}