#include<iostream>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int n;
    string s;
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        cin >> n;
        cin >> s;
        string ans;
        for(int j = 0; j < s.size(); ++j)
            if(s[j] == 'S')
                ans += 'E';
            else
                ans += 'S';
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
