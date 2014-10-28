#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num,n;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cin>>n;
        int s[n];
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }
        sort(s,s+n);
        if(n%2==0)
        cout<<s[n/2-1]<<endl;
        else
        cout<<s[n/2]<<endl;
    }
    return 0;
}
