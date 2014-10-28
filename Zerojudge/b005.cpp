#include <iostream>
#include <cstdio>
using namespace std;
bool check(int *,int);
int main()
{
    int t;
    while(cin>>t)
    {
        int n[t*t];
        for(int i=0;i<t*t;++i)
            cin>>n[i];
        if(check(n,t))
        {
            cout<<"OK"<<endl;
        }
        else
        {
            int c=1;
            for(int i=0;i<t*t;++i)
            {
                n[i]=!n[i];
                if(check(n,t))
                {
                    cout<<"Change bit ("<<i/t+1<<","<<i%t+1<<")"<<endl;
                    c=0;
                    break;
                }
                else
                {
                    n[i]=!n[i];
                }
            }
            if(c==1)cout<<"Corrupt"<<endl;
        }
    }
    return 0;
}
bool check(int *n,int t)
{
    int s=0,s2=0;
    for(int i=0;i<t;++i)
    {
       for(int j=i*t;j<(i+1)*t;++j)
       {
           s+=n[j];
       }
       for(int j=0;j<t;++j)
       {
           s2+=n[j*t+i];
       }
       if(s&1||s2&1)return 0;
    }
    return 1;
}
