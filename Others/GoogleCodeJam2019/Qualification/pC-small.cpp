#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, l, x;
    vector<int>prime;
    prime.push_back(2);
    for(int i = 3; i < 100000; i += 2) {
        bool flag = false;
        for(int j = 3; j * j <= i; j += 2) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag) prime.push_back(i);
    }

    cin >> t;
    for(int time = 1; time <= t; ++time) {
        string ans;
        cin >> n >> l;

        if(n < 101 || n > 10000) {
            cout << "Case #" << time << ": QQ" << endl;
            continue;
        }

        vector<int>arr;
        for(int i = 0; i < l; ++i) {
            cin >> x;
            arr.push_back(x);
        }
     
        int p, q;
        vector<int>tmp;
        bool chk = false;
 
        for(int i = 0; i < prime.size(); ++i) {
            if(arr[0] % prime[i] == 0) {
                p = prime[i];
                q = arr[0] / prime[i];
                chk = true;
                break;
            }
        }

        // large case
        if(!chk) {
            cout << "Case #" << time << ": " << endl;
            continue;
        }
        
        if(arr[1] % p == 0) 
            swap(p, q);
        
        if(arr[1] == arr[0]) {
            for(int k = 1; k <= 2; ++k) {
                tmp = vector<int>();
                if(k == 2) swap(p, q);
                if(p != q) tmp.push_back(p);
                tmp.push_back(q);
                tmp.push_back(arr[1] / q);

                bool swapchk = false;
                for(int i = 2; i < l; ++i) {
                    if(tmp.size() - 1 < 0 || tmp[tmp.size() - 1] == 0 || arr[i] % tmp[tmp.size() - 1] != 0) {
                        swapchk = true;
                        break;
                    }
                    tmp.push_back(arr[i] / tmp[tmp.size() - 1]);
                }
                if(swapchk) continue;
                break;
            }
        } else {
            if(p != q) tmp.push_back(p);
            tmp.push_back(q);
            tmp.push_back(arr[1] / q);

            for(int i = 2; i < l; ++i) {
                if(tmp.size() - 1 < 0 || tmp[tmp.size() - 1] == 0 || arr[i] % tmp[tmp.size() - 1] != 0) continue;
                tmp.push_back(arr[i] / tmp[tmp.size() - 1]);
            }
        }

        vector<int>rec = tmp;
        sort(rec.begin(), rec.end());
        
        map<int, char>m;
        char nowchar = (char)('A');
        for(int i = 0; i < rec.size(); ++i) 
            if(!m.count(rec[i])) m[rec[i]] = (char)(nowchar++);

        if(p == q) ans += m[tmp[0]];
        for(int i = 0; i < tmp.size(); ++i)
            ans += m[tmp[i]];

        cout << "Case #" << time << ": " << ans << endl;
    }
    return 0;
}
