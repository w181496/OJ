#include <cstdio>
#include <cstring>

int bit[100010], N;

int sum(int x)
{
    int ret = 0;
    while(x > 0)
    {
        ret += bit[x];
        x -= (x & -x);
    }
    return ret;
}

void add(int x)
{
    while(x <= N)
    {
        bit[x] += 1;
        x += (x & -x);
    }
}

int main()
{
    int tmp;
    while(scanf("%d", &N) != EOF)
    {
        for(int i = 0; i < N; ++i) bit[i] = 0;
        for(int i = 0; i < N; ++i)
        {
            scanf("%d", &tmp);
            add(tmp);
            printf("%d\n", i - sum(tmp - 1) + 1);
        }
    }
    return 0;
}
