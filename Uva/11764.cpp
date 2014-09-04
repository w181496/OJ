#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int t;
        cin>>t;
        vector<int> num(t);
        for(int j=0;j<t;++j)
        {
            cin>>num[j];
        }
        int now=num[0];
        int lo=0,ju=0;
        for(int j=1;j<t;++j)
        {
            if(num[j]>now)
            {
                ju++;
            }
            else if(num[j]<now)
            {
                lo++;
            }
            now=num[j];
        }
        cout<<"Case "<<i<<": "<<ju<<" "<<lo<<endl;
    }
    return 0;
}
