#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int max = 0, min=100, ans, c = 0;
        for(int i=0;i<s.size();++i)
        {
            int t=1;
            for(int j=0;j<s.size();++j)
            {
                if(s[i]==s[j]&&i!=j)
                {
                    t++;
                }
            }
            if(t>max)max=t;
            if(t<min)min=t;
        }
        ans = max - min;
        for(int i=2;i*i<=ans;++i)
        {
            if(ans % i == 0)
            {
                c = 1;
                ans = 0;
                break;
            }
        }
        if(ans == 1||ans == 0)
        {
             ans = 0;
             c = 1;
        }

        if(c == 1)
        {
            cout << "No Answer" << endl;
        }
        else
        {
             cout << "Lucky Word" << endl;
        }
        cout << ans << endl;
    }
}
