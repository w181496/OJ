#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        vector<string>v1;
        vector<int>v2;
        for(int j=0;j<10;++j)
        {
            cin>>s>>t;
            v1.push_back(s);
            v2.push_back(t);
        }
        int max=0;
        for(int j=0;j<10;++j)
            if(v2[j]>max)max=v2[j];
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0;j<10;++j)
            if(v2[j]==max)
                cout<<v1[j]<<endl;
    }
    return 0;
}

