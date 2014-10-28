#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        if(a.size()!=b.size())
        {
            cout<<"No"<<endl;
            continue;
        }
        int t=0;
        for(int i=0;i<a.size();++i)
        {
            int c=0;
            for(int j=0;j<b.size();++j)
            {
                if(a[i]==b[j])
                {
                    b[j]='#';
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                cout<<"No"<<endl;
                t=1;
                break;
            }
        }
        if(t==0)cout<<"Yes"<<endl;
    }
    return 0;
}
