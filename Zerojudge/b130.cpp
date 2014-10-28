#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, t = 1;
    string s;
    cin >> n;
    int k[n];
    for(int i = 0; i < n; ++i)
        cin >> k[i];
    sort(k, k+n);
    for(int i = 1; i < n; ++i)
    {
        if(k[i] != k[i-1])
            t++;
    }
    cout << t << endl;
    cout << k[0];
    for(int i = 1; i < n; ++i)
    {
        if(k[i] != k[i-1])
            cout << " " << k[i];
    }
    cout << endl;
}
