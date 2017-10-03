#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    int n, ans = 0, cnt = 0;
    string s;
    map<char, int>m;
    cin >> n >> s;
    if(n >= 1 && s[0] >= 'a' && s[0] <= 'z') ans = cnt = 1, m[s[0]]++;
    for(int i = 1; i < n; ++i) {
        if(s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i] >= 'a' && s[i] <= 'z' && m[s[i]] == 0) {
            m[s[i]]++;
            cnt++;
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            for(map<char, int>::iterator it=m.begin(); it != m.end(); it++)
                it->second = 0;
            cnt = 0;
        } else if(s[i] >= 'a' && s[i] <= 'z' && cnt == 0) cnt = 1, m[s[i]]++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
