#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    map<string, int>m;
    string s;
    while(getline(cin, s)) {
        if(m[s] > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        m[s]++;
    }
    return 0;
}
