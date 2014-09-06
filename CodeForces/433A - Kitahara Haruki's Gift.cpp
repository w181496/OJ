#include <string>
#include <iostream>
#include <cmath>
#include <sstream>
#include <cstdio>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, w1=0, w2=0, tmp, sum=0;
    bool flag=true;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        tmp==100?w1++:w2++;
        sum+=tmp;
    }
    for(int i=0;i<=w1;++i)
        for(int j=0;j<=w2;++j)
            if(100*i+200*j==sum/2&&100*(w1-i)+200*(w2-j)==sum/2)
            {
                flag=false;
                break;
            }
    puts(flag?"NO":"YES");
    return 0;
}