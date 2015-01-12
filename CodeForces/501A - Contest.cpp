#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    double a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = max(3 * a / 10, a - a * c / 250);
    y = max(3 * b / 10, b - b * d / 250);
    if(a == b && x == y) cout << "Tie" << endl;
    else if(x > y) cout << "Misha" << endl;
    else if(x < y) cout << "Vasya" << endl;
    else cout << "Tie" << endl;
    return 0;
}
