#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, arr[110], arr2[110], ans=0;
    char ch;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>ch;
        arr[i]=(ch-'0');
        arr2[i]=arr[i];
    }
    arr2[0]+=1;
    for(int i=0;i<n;++i){
        if(arr2[i]>1)
            arr2[i+1]++,arr2[i]=0;
        if(arr[i]!=arr2[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
