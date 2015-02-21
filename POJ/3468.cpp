#include <iostream>
using namespace std;
typedef long long LL;
struct Node
{
    LL l, r;
    LL lson, rson;
    LL tag;
    LL data;
    Node() {tag = 0;}
};

Node ST[200050];
LL arr[100050], ptr = 0;

void build(LL l, LL r, LL idx)
{
     ST[idx].l = l;
     ST[idx].r = r;
     if(l == r - 1) {
        ST[idx].data = arr[l];
        ST[idx].tag = 0;
     }
     else {
        LL lson = ST[idx].lson = ++ptr;
        LL rson = ST[idx].rson = ++ptr;
        LL mid = (l + r) >> 1;
        build(l, mid, lson);
        build(mid, r, rson);
        ST[idx].data = (ST[lson].data + ST[rson].data);
     }
}

void push(LL idx)
{
    LL lson = ST[idx].lson;
    LL rson = ST[idx].rson;
    ST[lson].tag += ST[idx].tag;
    ST[rson].tag += ST[idx].tag;
    //ST[idx].tag = 0;
}

void pull(LL idx)
{
    LL lson = ST[idx].lson;
    LL rson = ST[idx].rson;
    ST[idx].data = (ST[lson].data + ST[lson].tag * (ST[lson].r -ST[lson].l) + ST[rson].data + ST[rson].tag * (ST[rson].r - ST[rson].l));
    ST[idx].tag = 0;
}

void modify(LL l, LL r, LL idx, LL v)
{
     if(ST[idx].l == l && ST[idx].r == r) {
         ST[idx].tag += v;
     }
     else
     {
          LL mid = (ST[idx].l + ST[idx].r) >> 1;
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

void query(LL l, LL r, LL idx, LL &ans)
{
     if(ST[idx].l == l && ST[idx].r == r){
         ans = ST[idx].data + ST[idx].tag * (ST[idx].r - ST[idx].l);
     }
     else
     {
          LL mid = (ST[idx].l + ST[idx].r) >> 1;
          push(idx);
          if(l >= mid) query(l, r, ST[idx].rson, ans);
          else if(r <= mid) query(l, r, ST[idx].lson, ans);
          else
          {
               LL ans1, ans2;
               query(l, mid, ST[idx].lson, ans1);
               query(mid, r, ST[idx].rson, ans2);
               ans = ans1 + ans2;
          }
          pull(idx);
     }
}

int main()
{
    ios_base::sync_with_stdio(0);
    LL n, m, x, y, v, ans;
    char ch;
    cin >> n >> m;
    for(LL i = 0; i < n; ++i)
        cin >> arr[i];
    build(0, n, 0);
    for(LL i = 0; i < m; ++i)
    {
         cin >> ch;
         if(ch == 'Q')
         {
              cin >> x >> y;
              query(x - 1, y, 0, ans);
              cout << ans << endl;
         }
         else
         {
              cin >> x >> y >> v;
              modify(x - 1, y, 0, v);
              //for(int i = 0; i < 2 * n; ++i)
              //{
              //     query(i, i + 1, 0, ans);
              //     cout << ST[i].l << "~" << ST[i].r << ": " << ST[i].data << " " << ST[i].tag << endl;
              //}
         }
    }
    return 0;
}
