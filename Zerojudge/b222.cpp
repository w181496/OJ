#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,s2;
    int n;
    cin >> s >> n;
    for(int i=1;i<=n;++i)
    {
        int A=0, B=0;
        cin>>s2;
        for(int x=0;x<s.size();++x)
        {
            for(int y=0;y<s.size();++y)
            {
                if(s[x]==s2[y]&&x==y)
                    A++;
                else if(s[x]==s2[y])
                    B++;
            }
        }
        cout<<A<<"A"<<B<<"B"<<endl;
    }
    return 0;
}
