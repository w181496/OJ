#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int num[n];
        bool c[n-1];
        for(int i=0;i<n-1;i++)
            c[i]=false;
        for(int i=0;i<n;++i)
            cin>>num[i];
        for(int i=0;i<n-1;++i)
        {
            if(num[i]-num[i+1]>0)
                c[num[i]-num[i+1]]=true;
            else
                c[num[i+1]-num[i]]=true;
        }
        int t=1;
        for(int i=1;i<n-1;i++)
        {
            if(c[i]==false)
            {
                t=0;
                break;
            }
        }
        if(t==1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    return 0;
}
