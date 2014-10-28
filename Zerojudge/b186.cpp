#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d=0,e,f;
    while(cin>>a>>b>>c)
    {
       e=(a-a%10)/10;
       f=(c-c%2)/2;
       if(e>f)
       {
           d=f;
       }
       else
       {
           d=e;
       }
       cout<<a<<" 個餅乾，"<<b+d<<" 盒巧克力，"<<c<<" 個蛋糕。"<<endl;
       d=0;
    }
    return 0;
}
