#include <iostream>
using namespace std;

int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        while(n!=m)
        {
            if(m>n)
            {
                m-=n;
            }
            else if(n>m)
            {
                n-=m;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}
