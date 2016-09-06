#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    long long a, b;
    while(cin >> a >> b) {
        cout << __gcd(a, b) << endl;
    }
    return 0;
}
