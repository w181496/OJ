#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
//#define fin cin
//#define fout cout

int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    int t, n, x, arr[10010], id, ans;
    fin >> t;
    for(int i = 1; i <= t; ++i)
    {
        fin >> n >> x;
        ans = 0;
        for(int j = 0; j < n; ++j)
            fin >> arr[j];
        sort(arr, arr + n);
        id = n - 1;
        for(int j = id; j >= 0; --j)
        {
             if(arr[j] >= 1)
             {
                 for(int k = j - 1; k >= 0; --k)
                 {
                      if(arr[k] >= 1 && arr[j] + arr[k] <= x)
                      {
                          arr[k] = -1;
                          break;
                      }
                 }
                 ans++;
                 arr[j] = -1;
             }
        }
        fout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
