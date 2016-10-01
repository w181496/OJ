#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int h1, h2, m1, m2, m3, t;
    cin >> t;
    while(t--) {
        cin >> h1 >> m1 >> h2 >> m2 >> m3;
        if(h1 * 60 + m1 + m3 > h2 * 60 + m2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
