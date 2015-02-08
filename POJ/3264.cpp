#include <cstdio>
#define MAXN 50001

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a > b ? b : a; }

struct Node
{
    int l, r;
    int lson, rson;
    int mxh, mnh;
} ST[2 * MAXN];

int arr[MAXN], ptr;

void build(int l, int r, int idx)
{
    ST[idx].l = l;
    ST[idx].r = r;
    if(l == r - 1) 
    {
        ST[idx].mxh = ST[idx].mnh = arr[l];
    }
    else
    {
         int lson = ST[idx].lson = ++ptr;
         int rson = ST[idx].rson = ++ptr;
         int mid = (l + r) >> 1;
         build(l, mid, lson);
         build(mid, r, rson);
         ST[idx].mxh = max(ST[lson].mxh, ST[rson].mxh);
         ST[idx].mnh = min(ST[lson].mnh, ST[rson].mnh);
    }
}

void query(int l, int r, int idx, int &mx, int &mn)
{
     if(ST[idx].l == l && ST[idx].r == r)
     {
          mx = ST[idx].mxh;
          mn = ST[idx].mnh;
     }
     else
     {
         int mid = (ST[idx].l + ST[idx].r) >> 1;
         if(l >= mid) query(l, r, ST[idx].rson, mx, mn);
         else if(r <= mid) query(l, r, ST[idx].lson, mx, mn);
         else
         {
              int mx1, mx2, mn1, mn2;
              query(l , mid, ST[idx].lson, mx1, mn1);
              query(mid, r, ST[idx].rson, mx2, mn2);
              mx = max(mx1, mx2);
              mn = min(mn1, mn2);
         }
     }
}

int main()
{
    int N, Q, a, b, mx, mn;
    scanf("%d%d", &N, &Q);
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    ptr = 0;
    build(0, N, 0);
    for(int i = 0; i < Q; i++)
    {
         scanf("%d%d", &a, &b);
         query(a - 1, b, 0, mx, mn);
         printf("%d\n", mx - mn);
    }
    return 0;
}
