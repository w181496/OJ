#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    while(cin >> s)
    {
        string ans = "NA";
        for(int i = 0; i <= s.size(); i++)
        {
            for(int j = 'a'; j <= 'z'; ++j)
            {
                string tmp = s.substr(0, i) + (char)j + s.substr(i, s.size() - i);
                bool flag = true;
                for(int k = 0; k <= tmp.size() / 2; k++)
                {
                    if(tmp[k] != tmp[tmp.size() - k - 1])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                     ans = tmp;
                     break;
                }
            }
            if(ans != "NA") break;
        }
        cout << ans << endl;
    }
    return 0;
}
