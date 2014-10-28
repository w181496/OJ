#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    cin>>ws;
    map<string,int>m;
    while(n--)
    {
        string s,tmp;
        getline(cin,s);
        stringstream ss(s);
        ss>>tmp;
        m[tmp]++;
    }
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
