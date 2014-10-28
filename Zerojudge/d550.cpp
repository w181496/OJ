#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
struct stu
{
    vector<int>v;
};
bool operator<(stu a,stu b)
{
    for(int i=0;i<a.v.size();++i)
    {
        if(b.v[i]<a.v[i])return true;
        if(b.v[i]>a.v[i])return false;
    }
    return true;
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        vector<stu> t(n);
        for(int i=0;i<n;++i)
        {
            int temp;
            for(int j=0;j<m;++j)
            {
                scanf("%d",&temp);
                t[i].v.push_back(temp);
            }
        }
        sort(t.begin(),t.end());
        for(int i=n-1;i>=0;--i)
        {
            printf("%d",t[i].v[0]);
            for(int j=1;j<m;++j)
            {
                printf(" %d",t[i].v[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
