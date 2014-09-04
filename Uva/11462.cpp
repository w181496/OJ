#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int n;
    while(cin>>n)
    {
        if(n==0)break;
        vector<int>num(n);
        for(int i=0;i<n;++i)
            cin>>num[i];
        sort(num.begin(),num.end());
        cout<<num[0];
        for(int i=1;i<n;++i)
            cout<<" "<<num[i];
        cout<<endl;
    }
    return 0;
}
