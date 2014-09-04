#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        int t, s;
        cin >> t >> s;
        int k[t];
        k[0]=s;
        for(int j=1; j<t ;j++)
            cin >> k[j];
        sort(k,k+t);
        for(int i=0;i<t;i++)
        {
            if(k[i]==s)
            {
                cout<<k[i+1]<<" "<<k[i-1]<<endl;
                break;
            }
        }
    }
    return 0;
}