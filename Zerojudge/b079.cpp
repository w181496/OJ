#include <iostream>
#include <vector>
using namespace std;
int A(int);
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        cout<<A(n)<<endl;
    }
    return 0;
}
int A(int n)
{
    if(n<=2)return 1;
    vector<int>a(n+1,0);
    a[1]=a[2]=1;
    if(n>2)
    {
        for(int i=3;i<=n;++i)
        {
            a[i]=a[i-a[i-1]]+a[i-1-a[i-2]];
        }
    }
    return a[n];
}
