#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n,k,t[21];
    while(cin>>n)
    {
        string s;
        for(int i=0; i<n; ++i)
            cin>>t[i];
        cin>>s>>k;
        string temp=s;
        for(int j=0; j<k; ++j)
        {
            for(int i=0; i<n; ++i)
            {
                temp[i]=s[t[i]-1];
            }
            s=temp;
        }
        cout<<s<<endl;
    }
    return 0;
}
