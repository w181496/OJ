#include <cstdio>
#include <algorithm>
using namespace std;
struct student
{
    int number;
    int c;
    int m;
    int e;
    int total;
};
bool operator<(student a,student b)
{
    if(b.total!=a.total)return a.total<b.total;
    else if(a.c!=b.c)return a.c<b.c;
    else return a.number>b.number;
}
main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        student s[n];
        for(int i=0;i<n;++i)
        {
            scanf("%d%d%d",&s[i].c,&s[i].m,&s[i].e);
            s[i].total=s[i].c+s[i].m+s[i].e;
            s[i].number=i+1;
        }
        sort(s,s+n);
        for(int i=n-1;i>=n-5;--i)
            printf("%d %d\n",s[i].number,s[i].total);
    }
}
