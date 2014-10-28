#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    float l,w,mx,ans;
    while(cin>>n&&n)
    {
        mx=-1;
        for(int i=0;i<n;++i)
        {
            cin>>l>>w;
            if(min(l/4,w)>mx)
            {
                mx=min(l/4,w);
                ans=i+1;
            }
            if(min(w/4,l)>mx)
            {
                mx=min(w/4,l);
                ans=i+1;
            }
            if(min(w/2,l/2)>mx)
            {
                mx=min(w/2,l/2);
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
