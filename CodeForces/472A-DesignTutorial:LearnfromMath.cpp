#include<iostream>
#include<cstring>
using namespace std;
typedef long long LL;
bool pri[1000010];
int main()
{
    memset(pri,true,sizeof(pri));
    for(int i=3;i<1000000;i+=2)
    {
        if(pri[i])
            for(int j=2;j*i<1000000;++j)pri[j*i]=false;
    }
    int n;
    cin>>n;
    int a, b;
    for(int i=4;i<=n;++i)
    {
        bool chk=true;
        if(i%2==0)
        {
            if((n-i)%2!=0)
            {
                if(pri[n-i])chk=false;
            }
        }
        else
        {
             if(pri[i])chk=false;
             else if(pri[n-i])chk=false;
        }
        if(chk)
        {
             a=i;
             b=n-i;
             break;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
