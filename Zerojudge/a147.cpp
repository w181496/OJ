#include <iostream>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        if(n>1)
            cout<<"1";
        for(int i=2;i<n;i++)
        {
            if(i%7!=0)
            {
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}
