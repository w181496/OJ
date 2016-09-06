#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int h, m;
    while(cin >> h >> m) {
        h = (h + (m + 30) / 60 + 2) % 24;
        m = (m + 30) % 60;
        if(h < 10) cout << "0" << h;
        else cout << h;
        if(m < 10) cout << ":0" << m << endl;
        else cout << ":" << m << endl;
    }
    return 0;
}
