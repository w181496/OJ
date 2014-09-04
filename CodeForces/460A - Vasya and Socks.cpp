#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,i;
    cin>>n>>m;
    for(i=1;n>0;++i,n--)
        if(!(i%m))n++;
    cout<<i-1<<endl;
    return 0;
}