#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    while(cin >> n)
        if(n % 4) cout << "fat" << endl;
        else cout << "egg" << endl;
    return 0;
}
