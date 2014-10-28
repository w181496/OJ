#include <cstdlib>
#include <iostream>
using namespace std;
int GCD(int m, int n)
{
    int k;
    while (n!=0)
    {
          k=m%n;
          m=n;
          n=k;
    }
    return m;
}
int Pow(int a, int n, int p)
{
    int i, t;
    for (i=0, t=1; i<n; i++)
        t=(t*a)%p;
    return t;
}
main() {
    int a, b, m, n, p, g, t;
    while (1)
    {
        cin >> a >> b >> m >> n >> p;
        if (cin.fail()) break;
        if (a<b) { t=a; a=b; b=t; }
        g=GCD(m, n);
        a=Pow(a, g, p);
        b=Pow(b, g, p);
        cout << (p+a-b)%p << endl;
    }
}
