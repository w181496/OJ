#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t, n, ans;
    int x[2500], y[2500], len[2500];
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    fin >> t;
    for(int c = 1; c <= t; ++c) {
        fin >> n;
        ans = 0;
        for(int i = 0; i < n; ++i)
            fin >> x[i] >> y[i];
        for(int i = 0; i < n; ++i) {
            map<int, int>m;
            for(int j = 0; j < n; ++j) {
                if(i == j) continue;
                int l = (x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]);
                m[l]++;
            }
            for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
                ans += ((it->second - 1) * it->second / 2);
        }
        fout << "Case #" << c << ": " << ans << endl;
    }
    return 0;
}
