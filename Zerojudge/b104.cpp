#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cin>>ws;
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        bool f=true;
        for(int i=0;i<s1.size();++i)
        {
            bool check=true;
            for(int j=0;j<s2.size();++j)
            {
                if(s1[i]==s2[j])
                {
                    s1[i]='#';
                    s2[j]='#';
                    check=false;
                    break;
                }
            }
            if(check)
            {
                cout<<"impossible"<<endl;
                f=false;
                break;
            }
        }
        if(f)cout<<"possible"<<endl;
    }
    return 0;
}
