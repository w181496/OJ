#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        stringstream ss(s);
        string tmp, ans, tmp2;
        while(ss >> tmp)
        {
            tmp2 = "";
            for(int i = 0; i < tmp.size(); ++i)
                tmp2 = (tmp[i] + tmp2);
            if(ans == "")
                ans = ans +tmp2;
            else
                ans = ans + " " + tmp2;

        }
        cout << ans << endl;

    }
    return 0;

}
