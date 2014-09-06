#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s, tmp;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();++i)
            if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
                s[i]=' ';
        int ans=0;
        stringstream ss(s);
        while(ss>>tmp)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
