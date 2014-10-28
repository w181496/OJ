#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int t[n],count=0,front=0,back=0,f=0,b=n-1;
        for(int i=0;i<n;++i)
            scanf("%d",&t[i]);
        while(f<n&&b>=0)
        {
            if(front>back)
            {
                back+=t[b--];
            }
            else if(front<back)
            {
                front+=t[f++];
            }
            else
            {
                count++;
                front+=t[f++];
                back+=t[b--];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
