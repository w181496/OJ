#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>t;
        vector<int>k(t);
        for(int j=0;j<t;++j)
        {
            cin>>k[j];
        }
        int x=k[0];
        for(int j=0;j<t;++j)
        {
            int sum=k[j];
            if(sum>x)x=sum;
            for(int l=j+1;l<t;++l)
            {
                sum+=k[l];
                if(sum>x)x=sum;
            }
        }
        cout<<x<<endl;
    }
    return 0;

}
