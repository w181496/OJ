#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    string s;
    cin>>n;
    cin>>ws;
    while(n--)
    {
        map<string,int>m;
        double total=0;
        while(getline(cin,s)&&s!="")
        {
            m[s]++;
            total++;
        }
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
            cout<<fixed<<setprecision(4)<<it->first<<" "<<(double)(it->second)/total*100<<endl;
    }
    return 0;
}
