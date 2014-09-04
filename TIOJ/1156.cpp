#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
bool abc(int *,int,int);
int main()
{
    int n,t;
    while(cin>>n)
    {
        int a[n];
        for(int i=0;i<n;++i)
            cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<=a[0];++i)
            if(abc(a,n,i))
                t=i;
        cout<<t<<endl;
    }
     return 0;
}
bool abc(int *a,int n,int t)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]%t!=0)
            return false;
    }
    return true;
}