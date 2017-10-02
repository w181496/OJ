// <(_ _)>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#include <cstring>
#define MAXN 100005
typedef long long LL;
using namespace std;
LL t, n, p, ans, sum;
LL A[100010];
int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    fin >> t;
    for(LL c = 1; c <= t; ++c) {
        fin >> n >> p;
        sum = ans = 0;
        deque<LL>dq;
        for(LL i = 0; i < n; ++i) {
            fin >> A[i];
            if(sum + A[i] > p) {
                while(!dq.empty() && sum + A[i] > p) {
                    sum -= dq.back();
                    dq.pop_back();
                }
                if(A[i] <= p) {
                    ans += dq.size() + 1;
                    dq.push_front(A[i]);
                    sum += A[i];
                }

            } else {
                ans += dq.size() + 1;
                dq.push_front(A[i]);
                sum += A[i];
            }
        }
        fout << "Case #" << c << ": " << ans << endl; 
    }
    return 0;
}

