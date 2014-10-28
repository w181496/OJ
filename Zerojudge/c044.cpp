#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n,t;
    vector<int>v1,v2;
    string s;
    int c[127]={0};
    cin>>n;
    cin>>ws;
    for(int i=1;i<=n;++i)
    {
        getline(cin,s);
        for(int j=0;j<s.size();++j)
        {
            if(s[j]>='a'&&s[j]<='z')
            {
                t=s[j]+'A'-'a';
                c[t]++;
            }
            else if(s[j]>='A'&&s[j]<='Z')
            {
                t=s[j];
                c[t]++;
            }

        }
    }
    char ch;
    for(int i=0;i<127;++i)
    {
        if(c[i]!=0)
        {
            v1.push_back(i);
            v2.push_back(c[i]);
        }
    }
    for(int i=0;i<v1.size();++i)
    {
        for(int j=i+1;j<v1.size();++j)
        {
            if(v2[i]<v2[j])
            {
                v1[i]+=v1[j];
                v1[j]=v1[i]-v1[j];
                v1[i]-=v1[j];
                v2[i]+=v2[j];
                v2[j]=v2[i]-v2[j];
                v2[i]-=v2[j];
            }
            else if(v2[i]==v2[j]&&v1[i]>v1[j])
            {
                v1[i]+=v1[j];
                v1[j]=v1[i]-v1[j];
                v1[i]-=v1[j];
                v2[i]+=v2[j];
                v2[j]=v2[i]-v2[j];
                v2[i]-=v2[j];
            }
        }
    }
    for(int i=0;i<v1.size();++i)
    {
        ch=v1[i];
        cout<<ch<<" "<<v2[i]<<endl;
    }
    return 0;
}
