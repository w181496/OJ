#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int mx[505][505], mx2[505][505];
    bool check[505][505];
    while(cin >> a >> b) {
        for(int i = 0; i < a; ++i)
            for(int j = 0; j < b; ++j) {
                cin >> mx[j][i];
                if(i == 0 && j == 0) check[j][i] = true;
                else if(i == a - 1 && j == b - 1) check[j][i] = true;
                else check[j][i] = false;
            }
        for(int i = 0; i < a; ++i)
            for(int j = 0; j < b; ++j)
                cin >> mx2[j][i];
        bool flag = true;

        if(mx[0][0] != mx2[0][0] || mx[b - 1][a - 1] != mx2[b - 1][a - 1]) flag = false;

        for(int i = 0; i < a && flag; ++i) {
            for(int j = 0; j < b && flag; ++j) {
                if(!check[j][i]) {
                    map<int, int>m;
                    check[j][i] = true;
                    m[mx[j][i]] = 1;
                    for(int k = 1;; ++k) {
                        if(j + k >= b || i - k < 0) break;
                        check[j + k][i - k] = true;
                        if(!m.count(mx[j + k][i - k])) m[mx[j + k][i - k]] = 1;
                        else m[mx[j + k][i - k]]++;
                    }
                    for(int k = 1;; ++k) {
                        if(j - k < 0 || i + k >= a) break;
                        check[j - k][i + k] = true;
                        if(!m.count(mx[j - k][i + k])) m[mx[j - k][i + k]] = 1;
                        else m[mx[j - k][i + k]]++;
                    }


                    //
                    if(!m.count(mx2[j][i])) flag = false;
                    else m[mx2[j][i]]--;

                    for(int k = 1;flag; ++k) {
                        if(j + k >= b || i - k < 0) break;
                        if(!m.count(mx2[j + k][i - k])) {
                            flag = false;
                            break;
                        } else {
                            m[mx2[j + k][i - k]]--;
                        }
                    }

                    for(int k = 1;flag; ++k) {
                        if(i + k >= a || j - k < 0) break;
                        if(!m.count(mx2[j - k][i + k])) {
                            flag = false;
                            break;
                        } else {
                            m[mx2[j - k][i + k]]--;
                        }
                    }
                    //if(!flag) cout << "GG" << endl;

                    for(map<int,int>::iterator it = m.begin(); it != m.end(); ++it) {
                        if(it->second != 0) {
                            //cout << " fuck " << endl;
                            flag = false;
                            break;
                        }
                    }


                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
