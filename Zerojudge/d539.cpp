#include <iostream>
using namespace std;
#define MAXN 500000

struct Node
{
    int l, r;
    int lson, rson;
    int data;
};

Node ST[2 * MAXN + 1];
int arr[MAXN + 1], ptr;

void swap(int &a, int &b)
{
    int r = a;
    a = b;
    b = r;
}

void build(int l, int r, int idx)
{
    ST[idx].l = l;
    ST[idx].r = r;
    if(l == r - 1)
        ST[idx].data = arr[l];
    else
    {
        int mid = (l + r) / 2;
        int lson = ST[idx].lson = ++ptr;
        int rson = ST[idx].rson = ++ptr;
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
        if(r <= mid) query(l, r, ST[idx].lson, ans);
        else if(l >= mid) query(l, r, ST[idx].rson, ans);
        else
        {
            int ans1, ans2;
            query(l, mid, ST[idx].lson, ans1);
            query(mid, r, ST[idx].rson, ans2);
            ans = max(ans1, ans2);
        }
    }
}

int main()
{
    int n, m, op, a, b, ans;
    ios_base::sync_with_stdio(0);
    cin >> n;
    ptr = 0;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    build(0, n, 0);
    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        if(a > b) swap(a, b);         
        query(a - 1, b, 0, ans);
        cout << ans << endl;
    }

    return 0;
}
