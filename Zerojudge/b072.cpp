#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y,n;
    while(cin>>x>>y)
    {
        string str,s,s2;
        if(x==0&&y==0)break;
        for(int i=1; i<=x; i++)
        {
            cin>>str;
            s+=str;
        }
        for(int i=1; i<=y; i++)
        {
            cin>>n;
            s2+=s[n-1];
        }
        cout<<s2<<endl;
    }
    return 0;
}
