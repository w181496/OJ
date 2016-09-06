#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    double r;
    while(cin >> r) {
        cout << r * 9 / 5 + 32 << endl;
    }
    return 0;
}
