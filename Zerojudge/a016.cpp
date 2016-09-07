#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int arr[9][9];
    int check[3][10]; // 0: 列 1: 行 2: 3x3
    bool flag;
    while(cin >> arr[0][0]) {
        for(int i = 0; i < 9; ++i)
            for(int j = 0; j < 9; ++j) {
                if(i == 0 && j == 0) continue;
                cin >> arr[j][i];
            }
        flag = true;
        // 檢查列+行
        for(int i = 0; i < 9 && flag; ++i) {
            for(int j = 0; j < 10; ++j) check[0][j] = check[1][j] = 0; // check清空
            for(int j = 0; j < 9 && flag; ++j) {
                if(check[0][arr[j][i]]) flag = false;
                check[0][arr[j][i]] = 1;
                if(check[1][arr[i][j]]) flag = false;
                check[1][arr[i][j]] = 1;
            }
        }
        // 檢查3x3
        for(int i = 0; i < 9 && flag; i += 3) {
            for(int j = 0; j < 9 && flag; j += 3) {
                for(int k = 0; k < 10; ++k) check[2][k] = 0; // check清空
                for(int a = 0; a < 3 && flag; ++a)
                    for(int b = 0; b < 3 && flag; ++b) {
                        if(check[2][arr[j + b][i + a]]) flag = false;
                        check[2][arr[j + b][i + a]] = 1;
                    }
            }
        }
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
