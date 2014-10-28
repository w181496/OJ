#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    int max=0;
    while(getline(cin,s))
    {
        if(s=="END")
        {
            for(int i=0;i<=max;++i)
            {
                for(int j=0;j<v.size();++j)
                {
                    if(j!=0)cout<<"  ";
                    if(v[j].size()>i)
                    {
                        cout<<v[j][i];
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
            break;
        }
        else
        {
            v.push_back(s);
            if(s.size()>max+1)max=s.size()-1;
        }
    }
    return 0;
}
