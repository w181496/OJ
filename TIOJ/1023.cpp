#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int t;
    while(cin>>t)
    {
        vector<int> n1;
        vector<int> n2;
        long long int sum=0,e;
        for(int i=0;i<t;i++)
        {
            cin>>e;
            n1.push_back(e);
        }
        for(int i=0;i<t;i++)
        {
            cin>>e;
            n2.push_back(e);
        }
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        for(int i=t-1;i>=0;i--)
        {
            sum+=n1[i]*n2[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}