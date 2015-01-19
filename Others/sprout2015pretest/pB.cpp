#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n, m, sx, sy;
    char mx[25][25];
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            cin >> mx [j][i];
            if(mx[j][i] == '.' && (((j == 0 || j == m - 1) && (i != 0 && i != n - 1)) || ((i == 0 || i == n - 1) && (j != 0 && j != m - 1))))
                sx = j, sy = i;
        }
    stack<int>stk;
    stk.push(sy * m + sx);
    while(!stk.empty())
    {
         int tx = stk.top() % m, ty = stk.top() / m;
         mx[tx][ty] = 'x';
         stk.pop();
         if(tx - 1 >= 0 && mx[tx - 1][ty] == '.')
              stk.push(ty * m + tx - 1);
         else if(tx + 1 < m && mx[tx + 1][ty] == '.')
              stk.push(ty * m + tx + 1);
         else if(ty - 1 >= 0 && mx[tx][ty - 1] == '.')
              stk.push((ty - 1) * m + tx);
         else if(ty + 1 < n && mx[tx][ty + 1] == '.')
              stk.push((ty + 1) * m + tx);
         else
              cout << ty + 1 << " " << tx + 1 << endl;
    }
    return 0;
}
