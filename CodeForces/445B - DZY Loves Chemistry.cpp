#include<iostream>
#include<cstring>
using namespace std;
int s[1300];
int find(int x)
{
    return x==s[x]?x:s[x]=find(s[x]);
}
int main()
{
    int n, m;
    bool chk[1300];
    while(cin>>n>>m)
    {
        for(int i=0;i<1300;++i)s[i]=i;
        memset(chk,0,sizeof(chk));
        for(int i=0; i<m; ++i)
        {
            int ta,tb,pa,pb;
            cin>>ta>>tb;
            pa=find(ta);
            pb=find(tb);
            if(pa!=pb)
                s[pa]=pb;
        }
        int c=0;
        for(int i=1; i<=n; ++i)
        {
            int tmp=find(i);
            if(chk[tmp]==false)
            {
                chk[tmp]=true;
                c++;
            }
        }
        cout<<(1LL<<(n-c))<<endl;
    }
    return 0;
}