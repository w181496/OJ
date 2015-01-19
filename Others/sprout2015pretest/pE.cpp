#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string s, tmps, ans;
    int flag = 0, num = 0;
    cin >> s;
    stack<string>stk;
    for(int i = 0; i < s.size(); ++i)
    {
        string ch = "";
        ch += s[i];
        if(s[i] >= 'a' && s[i] <= 'z'){
            stk.push(ch);
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            int j;
            string tmp;
            for(j = i; s[j] >= '0' && s[j] <= '9' && j < s.size(); ++j)
            {
                num = num * 10 + (s[j] - '0');
            }
            for(int k = 1; k <= num; ++k)
                tmp += stk.top();
            num = 0;
            stk.pop();
            stk.push(tmp);
            i = j - 1;
        }
        else if(s[i] == '(')
        {
             stk.push(ch);
        }
        else if(s[i] == ')')
        {
            string tmp;
            while(stk.top() != "(")
            {
                tmp = stk.top() + tmp;
                stk.pop();
            }
            stk.pop();
            stk.push(tmp);
        }
    }
    while(!stk.empty())
    {
         ans = stk.top() + ans;
         stk.pop();
    }
    cout << ans << endl;
    return 0;
}
