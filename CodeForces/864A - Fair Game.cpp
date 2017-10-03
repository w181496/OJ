#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    map<int, int>m;
    int n, t;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> t;
        m[t]++;
    }
    if(m.size() != 2) cout << "NO" << endl;
    else {
        map<int,int>::iterator it, prev;
        prev = it = m.begin();
        it++;
        if(it->second != prev->second) cout << "NO" << endl;
        else cout << "YES" << endl << prev->first << " " << it->first << endl;
    }
    return 0;
}
