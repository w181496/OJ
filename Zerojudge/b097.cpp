#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int a,b,r=1,s;
        cin>>a>>b;
        if(b>a)
        {
            a+=b;
            b=a-b;
            a-=b;
        }
        s=a*b;
        while(r!=0)
        {
            int e;
            r=a%b;
            e=a;
            a=b;
            b=e%b;
        }
        cout<<s/a<<endl;
    }
    return 0;
}
