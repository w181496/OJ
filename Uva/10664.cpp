#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;
int arr[40];
int dp[40][5000];
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> ws;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int tmp, sum = 0, idx = 0;
        while(ss >> tmp)
        {
            arr[idx++] = tmp;
            sum += tmp;
        }
        if(sum % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            sum /= 2;
            memset(dp, 0, sizeof(dp));
            dp[0][0] = 1;
            for(int i = 0; i <= sum; ++i)
            {
                for(int j = 1; j < idx; ++j)
                {
                    if(i == 0)
                        dp[j][i] = 1;
                    else
                        dp[j][i] = (dp[j - 1][i] | dp[j - 1][i - arr[j]]);
                }
            }
            if(dp[idx - 1][sum])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
