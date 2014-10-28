#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n,a,b,c;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
            cout<<b+c<<endl;
        else if(a==2)
            cout<<b-c<<endl;
        else if(a==3)
            cout<<b*c<<endl;
        else if(a==4)
            cout<<b/c<<endl;
    }

    return 0;
}
