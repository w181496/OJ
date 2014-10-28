#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>n(100);
    int k;
    while(cin>>k)
    {
        if(k==-1)break;
        int l;
        cin>>l;
        n[k]=l;
    }
    while(cin>>k)
    {
        if(k==-1)break;
        int l;
        cin>>l;
        n[k]+=l;
    }
    for(int i=0;i<100;++i)
    {
        if(n[i]!=0)
        cout<<i<<" "<<n[i]<<endl;
    }
    return 0;
}
