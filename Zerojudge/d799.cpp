#include <cstdio>
using namespace std;
#define MAXN 500001
typedef long long ll;
struct Node
{
    ll l, r;
    ll lson, rson;
    ll tag;
    ll sum;
} ST[2 * MAXN];

ll arr[MAXN], ptr = 0;

void build(ll l, ll r, ll idx)
{
    ST[idx].l = l;
    ST[idx].r = r;
    if(l == r - 1)
    {
        ST[idx].sum = arr[l];
        ST[idx].tag = 0;
    }
    else
    {
         ll mid = (l + r) >> 1;
         ll lson = ST[idx].lson = ++ptr;
         ll rson = ST[idx].rson = ++ptr;
         build(l, mid, lson);
         build(mid, r, rson);
         ST[idx].sum = ST[lson].sum + ST[rson].sum;
    }
}

void push(ll idx)
{
    ll lson = ST[idx].lson;
    ll rson = ST[idx].rson;
    ST[lson].tag += ST[idx].tag;
    ST[rson].tag += ST[idx].tag;
}

void pull(ll idx)
{
    ll lson = ST[idx].lson;
    ll rson = ST[idx].rson;
    ST[idx].sum = ST[lson].sum + ST[lson].tag * (ST[lson].r - ST[lson].l)
                + ST[rson].sum + ST[rson].tag * (ST[rson].r - ST[rson].l);
    ST[idx].tag = 0;
}

void modify(ll l, ll r, ll idx, ll v)
{
     if(ST[idx].l == l && ST[idx].r == r)
         ST[idx].tag += v;
     else
     {
          ll mid = (ST[idx].l + ST[idx].r) >> 1;
          push(idx);
          if(l >= mid) modify(l, r, ST[idx].rson, v);
          else if(r <= mid) modify(l, r, ST[idx].lson, v);
          else
          {
               modify(l, mid, ST[idx].lson, v);
               modify(mid, r, ST[idx].rson, v);
          }
          pull(idx);
     }
}

void query(ll l, ll r, ll idx, ll &ans)
{
     if(ST[idx].l == l && ST[idx].r == r)
         ans = ST[idx].sum + ST[idx].tag * (ST[idx].r - ST[idx].l);
     else
     {
          ll mid = (ST[idx].l + ST[idx].r) >> 1;
          push(idx);
          if(l >= mid) query(l, r, ST[idx].rson, ans);
          else if(r <= mid) query(l, r, ST[idx].lson, ans);
          else
          {
               ll ans1, ans2;
               query(l, mid, ST[idx].lson, ans1);
               query(mid, r, ST[idx].rson, ans2);
               ans = ans1 + ans2;
          }
          pull(idx);
     }
}

int main()
{
    ll n, m, x, y, v, type, ans;
    while(scanf("%lld", &n) == 1)
    {
         ptr = 0;
         for(int i = 0; i < n; ++i)
             scanf("%lld", &arr[i]);
         build(0, n, 0);
         scanf("%lld", &m);
         for(int i = 0; i < m; ++i)
         {
              scanf("%lld", &type);
              if(type == 1)
              {
                   scanf("%lld%lld%lld", &x, &y, &v);
                   modify(x - 1, y, 0, v);
              }
              else
              {
                   scanf("%lld%lld", &x, &y);
                   query(x - 1, y, 0, ans);
                   printf("%lld\n", ans);
              }
         }
    }
    return 0;
}
