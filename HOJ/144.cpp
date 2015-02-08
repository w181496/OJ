#include <iostream>
using namespace std;

struct Node
{
    int l, r;
    int lson, rson;
    int data;
} ST[200010];

int arr[100010], ptr;

void build(int l, int r, int idx)
{
    ST[idx].l = l;
    ST[idx].r = r;
    if(l == r - 1)
        ST[idx].data = arr[l];
    else
    {
         int mid = (l + r) / 2;
         int lson, rson;
         ST[idx].lson = lson = ++ptr;
         ST[idx].rson = rson = ++ptr;
         build(l, mid, lson);
         build(mid, r, rson);
         ST[idx].data = max(ST[lson].data, ST[rson].data);
    }
}

void query(int l, int r, int idx, int &ans)
{
     if(ST[idx].l == l && ST[idx].r == r)
         ans = ST[idx].data;
     else
     {
          int mid = (ST[idx].l + ST[idx].r) / 2;
          if(l >= mid) query(l, r, ST[idx].rson, ans);
          else if(r <= mid) query(l, r, ST[idx].lson, ans);
          else
          {
               int ans1, ans2;
               query(l, mid, ST[idx].lson, ans1);
               query(mid, r, ST[idx].rson, ans2);
               ans = max(ans1, ans2);
          }
     }
}

void modify(int x, int v, int idx)
{
    if(ST[idx].l == ST[idx].r - 1)
        ST[idx].data = v;
    else
    {
         int mid = (ST[idx].l + ST[idx].r) / 2;
         if(x < mid) modify(x, v, ST[idx].lson);
         else modify(x, v, ST[idx].rson);
         ST[idx].data = max(ST[ST[idx].lson].data, ST[ST[idx].rson].data);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, q, a, b, c;
    cin >> n >> q;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    build(0, n, 0);
    for(int i = 0; i < q; ++i)
    {
        cin >> a >> b >> c;
        if(a == 2)
        {
             int ans;
             query(b - 1, c, 0, ans);
             cout << ans << endl;
        }
        else
        {
             modify(b - 1, c, 0);
        }
    }
    return 0;
}
