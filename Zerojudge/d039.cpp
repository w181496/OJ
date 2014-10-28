#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a>>b;
        cout<<(a/3)*(b/3)<<endl;
    }
    return 0;
}
