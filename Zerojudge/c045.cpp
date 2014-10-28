#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check(int);
int change(int);
int main()
{
    vector<string> s;
    string ss;
    int maxsize=0;
    while(getline(cin,ss))
    {
        s.push_back(ss);
        if(ss.size()-1>maxsize)maxsize=ss.size()-1;
    }
    for(int i=0;i<=100;++i)
    {
        for(int j=s.size()-1;j>=0;--j)
        {
            if(i>=s[j].size()&&i<=maxsize)cout<<' ';
            else if(i>=s[j].size())continue;
            else cout<<s[j][i];
        }
        cout<<endl;
    }
    return 0;
}
