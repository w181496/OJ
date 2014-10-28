#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int t,k;
    while(cin>>t)
    {
        vector<int>n(t+1);
        for(int i=t;i>=0;--i)
        {
            cin>>k;
            n[i]=k;
        }
        if(n[t]>0&&t!=1)
        {
            if(n[t]==1)
                cout<<"x^"<<t;
            else
                cout<<n[t]<<"x^"<<t;
        }
        else if(n[t]<0&&t!=1)
        {
            if(n[t]==-1)
                cout<<"-x^"<<t;
            else
                cout<<n[t]<<"x^"<<t;
        }

        for(int i=t-1;i>=2;--i)
        {
            if(n[i]==0)continue;
            if(n[i]>0)
            {
                if(n[i]==1)
                    cout<<"+x^"<<i;
                else
                    cout<<"+"<<n[i]<<"x^"<<i;
            }
            else
            {
                if(n[i]==-1)
                    cout<<"-x^"<<i;
                else
                    cout<<n[i]<<"x^"<<i;
            }
        }
        if(n[1]>0)
        {
            if(n[1]==1)
                cout<<"+x";
            else
                cout<<"+"<<n[1]<<"x";
        }
        else if(n[1]<0)
        {
            if(n[1]==-1)
                cout<<"-x";
            else
                cout<<n[1]<<"x";
        }
        if(n[0]>0)
            cout<<"+"<<n[0]<<endl;
        else if(n[0]<0)
            cout<<n[0]<<endl;

    }
    return 0;
}
