#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int t=1;
        for(int i=0;i<s.size()/2;++i)
        {
            if(s[i]!=s[s.size()-i-1])
            {
                t=0;
                break;
            }
        }
        if(t==1)cout<<"palindrome"<<endl;
        else cout<<"not palindrome"<<endl;
    }

    return 0;
}