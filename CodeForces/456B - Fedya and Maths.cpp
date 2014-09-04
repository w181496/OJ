#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(void)
{
    string s;
    int a2[]={2,4,8,6},a3[]={3,9,7,1},a4[]={4,6};
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();++i)
        n=(n*10+(s[i]-'0'))%4;
    if(n<4)n+=4;
    cout<<(1+a2[(n-1)%4]+a3[(n-1)%4]+a4[(n-1)%2])%5<<endl;
    return 0;
}