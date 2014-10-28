#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    long long int n,m,a,b;
    while(cin>>n>>m)
    {
        vector<long long int>t(2);
        t[0]=t[1]=0;
        long long int sum=0,tmp;
        for(long long int i=0;i<n;++i)
        {
            cin>>tmp;
            sum+=tmp;
            t.push_back(sum);
        }
        for(long long int i=0;i<m;++i)
        {
            cin>>a>>b;
            if(a>b)
            {
                swap(a,b);
            }
            cout<<t[b+1]-t[a]<<endl;
        }
    }
    return 0;
}
