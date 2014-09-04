#include <cstdio>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,x;
    int sum=0;
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;++i)
    {
        int t;
        scanf("%d",&t);
        sum+=t;
    }
    sum=sum<0?(-sum):sum;
    if(sum%x==0)sum/=x;
    else sum=sum/x+1;
    printf("%d\n",sum);
    return 0;
}