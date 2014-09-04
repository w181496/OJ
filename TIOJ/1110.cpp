#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    //97~122
    int n;
    cin>>n;
    while(n--)
    {
        int t,max=0;
        char ch;
        vector<int>c(123);
        cin>>t;
        for(int i=1;i<=t;++i)
        {
            cin>>ch;
            int r=(int)ch;
            c[r]++;
            if(c[r]>max)
            {
                max=c[r];
            }
        }
        for(int i=97;i<123;++i)
        {
            if(max==c[i])
            {
                ch=(char)i;
                cout<<ch;
            }
        }
        cout<<endl;
    }
    return 0;
}