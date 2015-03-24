#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int cost[1010];
int main()
{
    int n, avg, rem, ans, t1, t2;
    while(scanf("%d", &n) && n != 0)
    {
        ans = avg = 0;
        for(int i = 0; i < n; ++i) {
            scanf("%d.%d", &t1, &t2);
            cost[i] = t1 * 100 + t2;
            avg += cost[i];
        }
        rem = avg % n;
        avg /= n;
        sort(cost, cost + n, cmp);
        for(int i = 0; i < rem; ++i)
            ans += abs(cost[i] - (avg + 1));
        for(int i = rem; i < n; ++i)
            ans += abs(cost[i] - avg);
        printf("$%.2lf\n", ans / 200.0);
    }
    return 0;
}
