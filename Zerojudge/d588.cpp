#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,temp,temp2;
    cin>>t;
    while(t--)
    {
        int max=-1;
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>temp>>temp>>temp>>temp2>>temp2>>temp2;
            if(temp>max)max=temp;
            if(temp2>max)max=temp2;
        }
        cout<<max<<endl;
    }
    return 0;
}
