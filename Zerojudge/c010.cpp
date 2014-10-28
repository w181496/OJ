#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    vector<int>v;
    while(scanf("%d",&t)!=EOF)
    {
        vector<int>::iterator iter;
        iter=lower_bound(v.begin(),v.end(),t);
        v.insert(iter,t);
        int r=v.size();
        if(r&1)cout<<v[r/2]<<endl;
        else cout<<(v[r/2-1]+v[r/2])/2<<endl;
    }
    return 0;
}
