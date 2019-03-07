#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int mygcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return mygcd(b,a);
}

int prime[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, idx;
    prime[0] = 2;
    idx = 1;
    for(int i = 3; i <= 46341; ++i) {
        bool flag = false;
        for(int j = 3; j * j <= i; ++j) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag) prime[idx++] = i;
    }

    while(cin >> n) {
        int tmp = n;
        if(n == 0) break;
        if(n == -2147483648) {
            cout << 31 << endl;
            continue;
        }
        if(n < 0) n *= -1;
        map<int, int>hash;
        for(int i = 0; i < idx; ++i) {
            if(prime[i] * prime[i] > n) break;
            while(n % prime[i] == 0) {
                n /= prime[i];
                hash[prime[i]]++;
            }
        }
        int gcd = 1;
        for(map<int,int>::iterator it = hash.begin(); it != hash.end(); ++it)
            if(gcd == 1) gcd = it->second;
            else gcd = mygcd(gcd, it->second);

        if(tmp < 0) {
            while(!(gcd & 1)) gcd /= 2;
        }

        cout << gcd << endl;
    }
    return 0;
}
