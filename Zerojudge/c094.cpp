#include <iostream>
using namespace std;
int main()
{
    int n,m,c,r,flag;
    int time=0;
    while(cin>>n>>m>>c)
    {
        if(n==0&&m==0&&c==0)break;
        flag=0;
        time++;
        cout<<"Sequence "<<time<<endl;
        int sum=0;
        int max=0;
        int e[n];
        bool t[n];
        for(int i=0;i<n;++i)
            t[i]=false;
        for(int i=0;i<n;++i)
            cin>>e[i];
        for(int i=0;i<m;++i)
        {
            if(flag==1)
            {
                cin>>r;
                continue;
            }
            cin>>r;
            r--;
            t[r]=!t[r];
            if(t[r])
                sum+=e[r];
            else
                sum-=e[r];
            if(sum>c)
            {
                cout<<"Fuse was blown."<<endl;
                flag=1;
                continue;
            }
            if(sum>max)max=sum;
        }
        if(flag==0){
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
        }
    }
    return 0;
}
