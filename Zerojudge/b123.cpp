//參考http://www.csie.ntnu.edu.tw/~u91029/LargestEmptyRectangle.html
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int n,m;
    while(cin>>n>>m)
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
                cin>>array[i][j];
        for (int i=1; i<=n; ++i)
            for (int j=1; j<=m; ++j)
                if (array[i][j])
                    width[i][j] = width[i][j-1] + 1;
                else
                    width[i][j] = 0;
        int area = 0;   // 最大矩形面積，初始化為最小值

        for (int i=1; i<=n; ++i)   // 窮舉矩形右下角頂點的位置
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
        cout<<area<<endl;
    }
    return 0;
}
