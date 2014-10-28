#include <iostream>

using namespace std;

int main()
{
        long long int n,a,b=0;
        while(cin>>n){

            if(n==0)
            break;
            for(int i=n;i>=1;i--)
            {
                cin>>a;
                b+=a*a;
            }
            cout<<b<<endl;
            b=0;
        }

    return 0;
}
