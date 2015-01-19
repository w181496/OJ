#include <iostream>
#include <algorithm>
using namespace std;

struct Rect
{
    int x1, x2, y1, y2;
};

int main()
{
    int t, ans;
    Rect r[2];
    cin >> t;
    while(t--)
    {
        cin >> r[0].x1 >> r[0].y1 >> r[0].x2 >> r[0].y2;
        cin >> r[1].x1 >> r[1].y1 >> r[1].x2 >> r[1].y2;
        if(r[0].x1 == r[1].x1 || r[0].x2 == r[1].x2)
        {
             if(r[0].y1 == r[1].y2 || r[1].y1 == r[0].y2)
                 ans = 2;
             else if(r[0].y2 > r[1].y1 && r[1].y2 > r[0].y1)
                 ans = 1;
             else 
                 ans = 4;
        }
        else if(r[0].x2 < r[1].x1 || r[1].x2 < r[0].x1 )
        {
             ans = 4;
        }
        else if(r[0].x2 == r[1].x1 || r[1].x2 == r[0].x1)
        {
             if(r[0].y2 > r[1].y1 && r[1].y2 > r[0].y1)
                 ans = 2;
             else if(r[0].y2 == r[1].y1 || r[0].y1 == r[1].y2)
                 ans = 3;
             else 
                 ans = 4;
        }
        else if(r[0].x2 > r[1].x1 || r[1].x2 > r[0].x1)
        {
             if(r[0].y2 > r[1].y1 && r[1].y2 > r[0].y1)
                 ans = 1;
             else if(r[0].y2 == r[1].y1 || r[0].y1 == r[1].y2)
                 ans = 2;
             else 
                 ans = 4;
        }
        else
        {
            if(r[0].y1 == r[1].y2 || r[1].y1 == r[0].y2)
                 ans = 2;
             else if(r[0].y2 > r[1].y1 && r[1].y2 > r[0].y1)
                 ans = 1;
             else 
                 ans = 4;
        }
        cout << ans << endl;
    }
    return 0;
}
