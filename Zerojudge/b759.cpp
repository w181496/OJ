#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    string s;
    while(cin >> s) {
        int sz = s.size();
        for(int i = 0; i < s.size(); ++i)
        {
            for(int j = 0; j < sz; j++) {
                cout << s[(i + j) % sz];
            }
            cout << endl;
        }
    }
    return 0;
}
