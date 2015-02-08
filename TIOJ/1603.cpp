#include <cstdio>
#define MAXN 100005
#define MAXM 100005
typedef long long LL;
LL max(LL a, LL b) { return a > b ? a : b; }
LL min(LL a, LL b) { return a > b ? b : a; }

struct Node
{
    LL l, r;
    LL lson, rson;
    LL mx, mn;
} ST[2 * MAXN];

LL ptr, arr[MAXN];

void build(LL l, LL r, LL idx)
{
    ST[idx].l = l;
    ST[idx].r = r;
    if(l == r - 1)
        ST[idx].mx = ST[idx].mn = arr[l];
    else
    {
         LL lson = ST[idx].lson = ++ptr;
         LL rson = ST[idx].rson = ++ptr;
         LL mid =  (l + r) >> 1;
         build(l, mid, lson);
         build(mid, r, rson);
         ST[idx].mx = max(ST[lson].mx, ST[rson].mx);
         ST[idx].mn = min(ST[lson].mn, ST[rson].mn);
    }
}

void query(LL l, LL r, LL idx, LL &mx, LL &mn)
{
     if(ST[idx].l == l && ST[idx].r == r)
     {
         mx = ST[idx].mx;
         mn = ST[idx].mn;
     }
     else
     {
          LL mx1, mx2, mn1, mn2;
          LL mid = (ST[idx].l + ST[idx].r) >> 1;
          if(l >= mid) query(l, r, ST[idx].rson, mx, mn);
          else if(r <= mid) query(l, r, ST[idx].lson, mx, mn);
          else
          {
               query(l, mid, ST[idx].lson, mx1, mn1);
               query(mid, r, ST[idx].rson, mx2, mn2);
               mx = max(mx1, mx2);
               mn = min(mn1, mn2);
          }
     }
}

int main()
{
    LL n, m, a, b, mx, mn;
    scanf("%lld%lld", &n, &m);
    for(int i = 0; i < n; ++i)
        scanf("%lld", &arr[i]);
    ptr = 0;
    build(0, n, 0);
    for(int i = 0; i < m; ++i)
    {
         scanf("%lld%lld", &a, &b);
         query(a - 1, b, 0, mx, mn);
         printf("%lld\n", mx - mn);
    }
    return 0;
}
