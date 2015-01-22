#include <iostream>
#include <fstream>
using namespace std;
//#define fin cin
//#define fout cout

int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    int t, n, arr[1010], ans;
    fin >> t;
    for(int i = 1; i <= t; ++i)
    {
        fin >> n;
        ans = 0;
        for(int j = 0; j < n; ++j)
            fin >> arr[j];
        for(int j = 0; j < n; ++j)
        {
             int cnt1 = 0, cnt2 = 0;
             for(int k = 0; k < j; ++k)
                 if(arr[k] > arr[j]) cnt1++;
             for(int k = j + 1; k < n; ++k)
                 if(arr[k] > arr[j]) cnt2++;
             ans += min(cnt1, cnt2);
        }
        fout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
