#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    string s;
    while(cin>>s)
    {
        stringstream ss(s);
        int n,t[101],id=0;
        while(ss>>n)
        {
            t[id]=n;
            id++;
        }
        sort(t,t+id);
        cout<<t[0];
        for(int i=1;i<id;++i)
            cout<<"+"<<t[i];
        cout<<endl;
    }
}