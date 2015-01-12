#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    string s1, s2;
    map<string,string> m,rrr;
    cin >> t;
    int cnt = 0, id = 0;
    string ans[1010], ans2[1010];
    for(int i = 0; i < t; ++i)
    {
        cin >> s1 >> s2;
        bool flag = true;
            for(map<string, string>::iterator it = m.begin(); it!=m.end(); ++it)
            {
                if(it->second == s1)
                {
                     it->second = s2;
                     flag = false;
                     break;
                }
            }
            if(flag) m[s1] = s2;
    }
    cout << m.size() << endl;
    for(map<string, string>::iterator it = m.begin(); it!=m.end(); ++it)
        cout << it->first << " " << it->second << endl;
    return 0;
}
