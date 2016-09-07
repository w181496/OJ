#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n, a, b;
    map<int,int>m;
    while(cin >> n) {
        b = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> a;
            m[a]++;
            if(m[a] > b) b = m[a];
        }
        for(map<int,int>::iterator it = m.begin(); it != m.end(); it++) {
            if(it->second == b) {
                cout << it->first << " " << b << endl;
            }
        }
    }
    return 0;
}
