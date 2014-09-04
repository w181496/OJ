#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;


int main()
{
    int r;
    while(cin>>r)
    {
        if(r==0)break;
        cout<<r;
        vector<int>n;
        int t,sum=r;
        while(cin>>t)
        {
            if(t==0)break;
            n.push_back(t);
            sum+=t;
        }
        cout<<" "<<n.size()+1<<" "<<sum<<endl;

    }

    return 0;
}