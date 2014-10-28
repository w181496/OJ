#include<iostream>
#include<string>
#include<vector>
using namespace std;
main()
{
    vector<long long int>a,b;
    a.push_back(0);
    b.push_back(0);
    a.push_back(0);
    b.push_back(1);
    for(int i=2;i<51;++i)
    {
         b.push_back(a[i-1]+1);
         a.push_back(a[i-1]+b[i-1]);
    }
    int n;
    while(cin>>n&&n!=-1)
    {
        cout<<a[n+1]<<" "<<a[n+1]+b[n+1]<<endl;
    }
}
