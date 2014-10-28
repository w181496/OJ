#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    while(getline(cin,s))
    {
        vector<int> v,v2;
        for(int i=0;i<s.size();++i)
        {
            n=s[i];
            bool ch=1;
            for(int j=0;j<v.size();++j)
            {
                if(v[j]==n)
                {
                    v2[j]++;
                    ch=0;
                }
            }
            if(ch)
            {
                v.push_back(n);
                v2.push_back(1);
            }
        }
        for(int i=0;i<v2.size();++i)
        {
            for(int j=i+1;j<v2.size();++j)
            {
                if(v2[i]>v2[j])
                {
                    v[i]+=v[j];
                    v[j]=v[i]-v[j];
                    v[i]-=v[j];
                    v2[i]+=v2[j];
                    v2[j]=v2[i]-v2[j];
                    v2[i]-=v2[j];
                }
                else if(v2[i]==v2[j]&&v[i]<v[j])
                {
                    v[i]+=v[j];
                    v[j]=v[i]-v[j];
                    v[i]-=v[j];
                    v2[i]+=v2[j];
                    v2[j]=v2[i]-v2[j];
                    v2[i]-=v2[j];
                }
            }
        }
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<" "<<v2[i]<<endl;
        }
    }
    return 0;
}
