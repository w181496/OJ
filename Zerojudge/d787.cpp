#include <iostream>
#include <vector>
#include <string>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        for(int r=1;r<=n;++r){
        int sum=0;
        string s;
        vector<int>a,b;
        cin>>s;
        for(int i=s.size()-1;i>=0;--i)
            a.push_back(s[i]-'0');
        cin>>s;
        for(int i=s.size()-1;i>=0;--i)
            b.push_back(s[i]-'0');
        for(int i=0;i<a.size();++i)
        {
            if(i>b.size()-1)
            {
                b.push_back(0);
            }
            b[i]+=a[i];
            if(b[i]>=10)
            {
                b[i]-=10;
                if(i+1<=b.size()-1)
                    b[i+1]++;
                else b.push_back(1);
                sum++;
            }
        }
        int t=a.size();
        if(a.size()>=b.size())t=0;
        while(b[t]>=10)
        {
            b[t]-=10;
            if(t+1<=b.size()-1)b[t+1]++;
            else b.push_back(1);
            sum++;
            t++;
        }
        cout<<sum<<endl;
        }
    }
}
