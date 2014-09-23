#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    LL n, p, tmp, chk[110];
    cin>>n;
    for(int i=1;i<=n;++i)chk[i]=0;
    cin>>p;
    for(int i=0;i<p;++i){
        cin>>tmp;
        chk[tmp]=1;
    }
    cin>>p;
    for(int i=0;i<p;++i){
        cin>>tmp;
        chk[tmp]=1;
    }
    for(int i=1;i<=n;++i)
        if(chk[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    cout<<"I become the guy."<<endl;
    return 0;
}
