#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> s;
        string ans1, ans2;
        bool flag = false;
        for(int j = 0; j < s.size(); ++j) {
            if(s[j] == '4') {
                flag = true;
                ans1 += '3';
                ans2 += '1';
            } else {
                if(flag) ans2 += '0';
                ans1 += s[j];
            }
        }
        cout << "Case #" << i << ": " << ans1 << " " << ans2 << endl;
    }
}
