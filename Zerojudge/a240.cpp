#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n[16]={0,5,8,8,2,3,5,2,9,4,1,1,7,6,4,7};
    int k,r;
    cin >> r;
    for(int j=1;j<=r;++j)
    {
        cin>>k;
        long long int t=k/16,sum=0;
        sum+=72*t;
        for(int i=0;i<k%16;++i)
            sum+=n[i];
        if(k%16==0)
            cout<<7;
        else
            cout<<n[k%16-1];
        cout<<" "<<sum<<endl;
    }
}
