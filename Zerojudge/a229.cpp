#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
void f(int n,int d,string s)
{
    if(n==0&&d==0)
    {
        puts(s.c_str());
        return;
    }
    else if(n>0||d>0)
    {
        if(n>0)
            f(n-1,d+1,s+'(');
        if(d>0)
            f(n,d-1,s+')');
    }
}
int main()
{
    int  n;
    while(scanf("%d",&n)==1){
        f(n,0,"");
        puts("");
    }
    return 0;
}
