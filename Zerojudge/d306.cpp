#include <iostream>
#include <string>
using namespace std;
int YO(string s)
{
    int t=1,ans=0;
    for(int i=s.size()-1;i>=0;--i)
    {
        ans+=(s[i]-'0')*t;
        t*=2;
    }
    return ans;
}
int gcd(int a,int b)
{
    while(a%b>0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return b;
}
main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int j=1;j<=n;++j)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(gcd(YO(s1),YO(s2))>1)cout<<"Pair #"<<j<<": All you need is love!"<<endl;
        else cout<<"Pair #"<<j<<": Love is not all you need!"<<endl;
    }
}
