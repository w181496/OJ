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
    int a, b, c, ans;
    while(scanf("%d%d%d", &a, &b, &c) != EOF)
    {
         ans = max(max(max(max(max(a + b * c, (a + b) * c), a * b + c), a * (b + c)), a * b * c), a + b + c);
         printf("%d\n", ans);
    }
    return 0;
}
