#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int t, ans=0;
        bool chk=false;
        cin>>t;
        while(t>0)
        {
            int last=t%2;
            t/=2;
            if(last==1)
            {
                ans++;
                if(chk&&t!=0)
                {
                    ans++;
                }
            }
            else
            {
                ans++;
                chk=true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
