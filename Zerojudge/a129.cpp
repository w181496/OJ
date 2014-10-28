#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
struct edge { long long int a, b, cost; };

bool cmp(edge c,edge d)
{
    return c.cost<d.cost;
}

edge ed[200000];

long long int par[100000];
long long int rank[100000];
void init(long long int n){
    for(long long int i = 0; i < n; i++) {
            par[i] = i;
            rank[i] = 0;
    }
}
long long int find(long long int x){
    if(par[x] == x) {
            return x;
    }else {
            return par[x] = find(par[x]);
    }

}
void unite(long long int x, long long int y)
{
    x = find(x);
    y = find(y);
    if(x==y){return;}

    if(rank[x]<rank[y]){
        par[x] = y;
    } else {
        par[y] = x;
        if( rank[x]==rank[y]){rank[x]++;}
    }
}
long long int p;
int main()
{
    long long int n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){

    for(long long int i=0;i<m;i++)
        scanf("%lld %lld %lld",&ed[i].a,&ed[i].b,&ed[i].cost);
    sort(ed,ed+m,cmp);
    init(n);
    long long int res = 0;
    for(long long int i=0;i<m;i++){
            edge e = ed[i];
            if(find(ed[i].a)!=find(ed[i].b)){unite(ed[i].a,ed[i].b);res+=e.cost;}
    }
    p=find(0);
    bool chk=true;
    for(long long int i=0;i<n;i++)
        if(find(i)!=p){chk=false; break;}
    if(chk)
        printf("%lld\n",res);
    else puts("-1");
    }
}
