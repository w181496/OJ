#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int p,t,n;
    bool chk[301];
    bool chk2=true;
    int ans=-1;
    cin>>p>>t;
    for(int i=0;i<301;++i)chk[i]=false;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        if(chk[n%p]==true)
        {
            if(chk2==true){
                ans=i+1;
                chk2=false;
            }
        }
        chk[n%p]=true;
    }
    cout<<ans<<endl;
    return 0;
}