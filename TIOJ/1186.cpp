#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int t=3+(n-2)*2;
        for(int i=n-1;i>=1;i--)
        {
            for(int r=1;r<n-i;r++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<i;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<i;j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        for(int i=1;i<=t;i++)
            cout<<"*";
        cout<<endl;
        for(int i=1;i<=n-1;i++)
        {
            for(int r=1;r<n-i;r++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=i-1;j>=1;j--)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=i-1;j>=1;j--)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
    }
    return 0;
}