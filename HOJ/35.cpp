#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int mx[7][7];
    bool flag = true;
    for(int i = 0; i < 6; ++i)
        for(int j = 0; j < 7; ++j)
            cin >> mx[j][i];
    for(int a = 1; a <= 6 && flag; ++a)
        for(int b = 1; b <= 6 && flag; ++b)
            for(int c = 1; c <= 6 && flag; ++c)
                for(int d = 1; d <= 6 && flag; ++d)
                    for(int e = 1; e <= 6 && flag; ++e)
                        for(int f = 1; f <= 6 && flag; ++f)
                        {
                             if(a == b || a == c || a == d || a == e || a== f || b == c || b == d || b == e || b == f || c == d || c == e || c == f || d == e || d == f || e == f) continue;
                             mx[0][6] = a;
                             mx[1][6] = b;
                             mx[2][6] = c;
                             mx[3][6] = d;
                             mx[4][6] = e;
                             mx[5][6] = f;
                             bool chk = true;
                             for(int i = 0; i < 6 && chk; ++i)
                             {
                                  int cnt = 0;
                                  for(int j = 0; j < 7; ++j)
                                  {
                                       if(j == 6 && mx[j][i] != cnt) chk = false;
                                       else if(j != 6 && mx[j][i] == mx[j][6]) cnt++;
                                  }
                             }
                             if(chk) flag = false;
                        }
    cout << mx[0][6];
    for(int i = 1; i < 6; ++i)
        cout << " " << mx[i][6];
    cout << endl;
    return 0;
}
