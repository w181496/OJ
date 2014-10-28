#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    long long int n,f=1,g=1,sum=0;
    while(cin>>n)
    {
        for(int i=2;i<=n;i++)
        {
            f+=i;
            g+=f;
        }
        cout<<f<<" "<<g<<endl;
        g=1;f=1;
    }

    return 0;
}
