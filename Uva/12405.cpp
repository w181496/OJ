#include <iostream>
using namespace std;
main()
{
    int t,n,m[101];
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        char ch;
        int ans=0;
        cin>>n;
        for(int j=0;j<n;++j)
        {
            cin>>ch;
            if(ch=='.')m[j]=1;
            else m[j]=0;
        }
        for(int j=0;j<n;++j)
        {
            if(m[j])
            {
                j+=2;
                ans++;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}