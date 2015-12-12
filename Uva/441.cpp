#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#define MAXN 100005
typedef long long LL;
using namespace std;
int arr[20];
int use[20];
int sol[20];
int t;

void back(int cur, int id)
{
    if(cur == 6) {
        cout << sol[0];
        for(int i = 1; i < 6; ++i)
            cout << " " << sol[i];
        cout << endl;
    } else {
        for(int i = id; i < t; ++i) {
             if(use[i]) continue;
             sol[cur] = arr[i];
             use[i] = 1;
             back(cur + 1, i + 1);
             use[i] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int io = 0;
    while(cin >> t && t)
    {
         for(int i = 0; i < t; ++i) {
             cin >> arr[i];
             use[i] = 0;
         }
         sort(arr, arr + t);
         if(io > 0) cout << endl;
         back(0, 0);
         io++;
    }
    
    return 0;
}

