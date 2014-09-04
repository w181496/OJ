#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define PI 3.14159
#define INF 1000000000
int main()
{
    ios::sync_with_stdio(0);
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int temp;
        int ans=0,a=0,b=0;
        for(int i=0;i<n;++i)
        {
            cin>>temp;
            if(temp==1)
                a++;
            else
                b++;
        }
        m-=a;
        k-=b;
        if(k<0)
            m-=-1*(k);
        if(m<0)
            ans+=-1*(m);
        cout<<ans<<endl;
    }
    return 0;
}