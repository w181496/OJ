#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,tmp;
    cin>>n>>m;
    tmp=min(n,m);
    if(tmp%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
    return 0;
}