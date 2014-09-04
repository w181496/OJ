#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;
int check(int*);
int main()
{
    int x,y;
    string s,str;
    int t=1;
    while(getline(cin,s))
    {
         stringstream ss;
        vector<int>n(32767,0);
        if(s=="0")break;
        ss<<s;
        while(ss>>x>>y)
        {
            for(int i=1;i<=y;i++)
            {
                t*=x;
            }
        }
        t--;
        int w=t;
        for(int i=2;i<=sqrt(w);i++)
        {
            while(t%i==0&&t>=i)
            {
                t/=i;
                n[i]++;
            }
        }
        if(t>0)
        {
            n[t]++;
        }
        int c=0;
        for(int i=w;i>=2;i--)
        {
            if(n[i]>0&&c==1)
            {
                cout<<" "<<i<<" "<<n[i];
            }
            if(n[i]>0&&c!=1)
            {
                c=1;
                cout<<i<<" "<<n[i];
            }
        }
        cout<<endl;
        t=1;
    }
    return 0;

}