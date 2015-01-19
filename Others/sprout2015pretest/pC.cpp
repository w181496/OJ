#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a < b)
    {int r = a; a = b; b = r;}
    if(b == 0) return 1;
    while(a % b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, a, b, arr[2010], ans = 0, g, tmps, tmpid;
    cin >> n >> a >> b;
    g = gcd(a, b);
    a /= g;
    b /= g;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    for(int i = 0; i < n; ++i)
    {
        int sum = 0, id = 0;
        for(int j = i; j < n; ++j)
        {
            sum += arr[j];
            id++;
            g = gcd(sum, id);
            tmps = sum / g; 
            tmpid = id / g;
            if(tmps == a && tmpid == b)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
