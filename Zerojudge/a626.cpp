#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int p[1000],id=1;
    p[0]=2;
    for(int i=3;i<1100;i+=2)
    {
        bool chk=false;
        for(int j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                chk=true;
                break;
            }
        }
        if(!chk)p[id++]=i;
    }
    int n,i,c=0;
    while(cin>>n)
    {
        c=0;
        for(i=0;p[i]<=n;++i)
        {
            c++;
            cout<<setw(10)<<p[i];
            if((c)%5==0)cout<<endl;
        }
        if(c%5!=0)cout<<endl;
    }
    return 0;
}
