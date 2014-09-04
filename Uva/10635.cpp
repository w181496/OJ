#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,m,k,tmp;
    int a[63000],b[63000];
    cin>>t;
    for(int s=1; s<=t; ++s)
    {
        cin>>n>>m>>k;
        for(int i=0;i<n*n;++i)a[i]=-1;
        for(int i=0; i<=m; ++i)
        {
            cin>>tmp;
            a[tmp]=i;
        }
        for(int i=0; i<=k; ++i)
        {
            cin>>tmp;
            b[i]=a[tmp];
        }
        vector<int>v;
        for(int i=0; i<=k; ++i)
        {
            if(b[i]==-1)continue;
            if(v.empty())v.push_back(b[i]);
            else if(b[i]>=v.back())v.push_back(b[i]);
            else *lower_bound(v.begin(),v.end(),b[i])=b[i];
        }
        cout<<"Case "<<s<<": "<<v.size()<<endl;
    }
    return 0;
}