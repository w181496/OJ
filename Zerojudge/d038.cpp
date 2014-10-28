#include <iostream>
using namespace std;
long long int ans[51];
main()
{
    ans[1]=1;ans[0]=1;
    for(int i=2;i<51;++i)
        ans[i]=ans[i-1]+ans[i-2];
    int n;
    while(cin>>n&&n!=0)cout<<ans[n]<<endl;
}
