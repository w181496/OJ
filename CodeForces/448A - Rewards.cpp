#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a1, a2, a3, b1, b2, b3, n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int tmp=0;
    if((a1+a2+a3)%5==0)tmp=(a1+a2+a3)/5;
    else tmp=(a1+a2+a3)/5+1;
    if((b1+b2+b3)%10==0)tmp+=(b1+b2+b3)/10;
    else tmp+=((b1+b2+b3)/10+1);
    if(tmp>n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}