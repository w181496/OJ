#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>k(n);
    for(int i=0;i<n;++i)
    {
        cin>>k[i];
    }
    sort(k.begin(),k.end());
    cout<<k[0];
    for(int i=1;i<k.size();++i)
    {
        cout<<" "<<k[i];
    }
    cout<<endl;
    return 0;
}
