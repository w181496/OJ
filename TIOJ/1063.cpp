#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        int width[n+2][m+2];
        bool array[n+2][m+2];
        for(int i=0; i<n+2; ++i)
            for(int j=0; j<m+2; ++j)
            {
                array[i][j]=0;
                width[i][j]=0;
            }
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=m; ++j)
                scanf("%d",&array[i][j]);
        for (int i=1; i<=n; ++i)
            for (int j=1; j<=m; ++j)
                if (array[i][j])
                    width[i][j] = width[i][j-1] + 1;
                else
                    width[i][j] = 0;
        int area = 0;
        for (int i=1; i<=n; ++i)
            for (int j=1; j<=m; ++j)
            {
                int w = 1e9;
                for (int h=1; i-h+1 >= 0; ++h)
                {
                    if (width[i-h+1][j] == 0) break;
                    w = min(w, width[i-h+1][j]);
                    area = max(area, w*h);
                }
            }
        printf("%d\n",area);
    }
    return 0;
}