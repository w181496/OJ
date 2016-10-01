#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        bool flag = true;
        if(n & 2 == 0) flag = false;
        for(int i = 3; i * i <= n && flag; i += 2)
            if(n % i == 0) flag = false;
        if(flag) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
