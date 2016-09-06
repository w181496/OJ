#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    string str;
    getline(cin, str);
    stringstream ss(str);
    long long int n;
    map<long long int, int>m;
    while(ss >> n) {
        m[n] = (m[n] + 1) % 3;
    }
    for(map<long long int, int>::iterator it = m.begin(); it != m.end(); it++) {
        if(it->second != 0){ cout << it->first << endl; break;}
    }
    return 0;
}
