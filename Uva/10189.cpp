#include <iostream>
using namespace std;
char mx[200][200];
int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, t = 1;
    while(cin >> n >> m && n != 0 && m != 0) {
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                cin >> mx[j][i];
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(mx[j][i] == '.'){
                    int cnt = 0;
                    if(i > 0 && mx[j][i - 1] == '*') cnt++;
                    if(i < n - 1 && mx[j][i + 1] == '*') cnt++;
                    if(j > 0 && mx[j - 1][i] == '*') cnt++;
                    if(j < m - 1 && mx[j + 1][i] == '*') cnt++;
                    if(i > 0 && j > 0 && mx[j - 1][i - 1] == '*') cnt++;
                    if(i > 0 && j < m - 1 && mx[j + 1][i - 1] == '*') cnt++;
                    if(i < n - 1 && j > 0 && mx[j - 1][i + 1] == '*') cnt++;
                    if(i < n - 1 && j < m - 1 && mx[j + 1][i + 1] == '*') cnt++;
                    mx[j][i] = ('0' + cnt);
                } 
            }
        }
        if(t > 1) cout << endl; 
        cout << "Field #" << t++ << ":" << endl;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
                cout << mx[j][i];
            cout << endl;
        }
    }
    return 0;
}
