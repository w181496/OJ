#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n;
    while(cin>>n && n)
    {
        bool chk=true;
        if(n%2==0&&n!=2)chk=false;
        for(int i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                chk=false;
                break;
            }
        }
        LL tmp=(1<<(n-1)),tmp2=((1<<(n))-1),a=0,b=0;
        for(LL i=1;i*i<=tmp;++i)
            if(tmp%i==0){
                a+=i;
                if(tmp/i!=i)a+=tmp/i;
            }
        for(LL i=1;i*i<=tmp2;++i)
            if(tmp2%i==0){
                b+=(i);
                if(tmp2/i!=i)b+=tmp2/i;
            }
        if(a*b==2*tmp*tmp2)
            cout<<"Perfect: "<<a*b/2<<"!"<<endl;
        else if(chk)
            cout<<"Given number is prime. But, NO perfect number is available."<<endl;
        else
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}
