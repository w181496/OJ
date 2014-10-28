#include <iostream>

using namespace std;

int main()
{
    long int a,b,l=1;
    long int left,right,m;

    cin>>a>>b;
    int t[a],r[b];
    m=(a-1)/2;
    left=0;right=a-1;
    for(int i=0;i<=a-1;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<=b-1;i++)
    {
        cin>>r[i];
        while(l==1)
        {
            if(m==right||m==left)
            {
                cout<<"0"<<endl;
                l=2;
            }
            else if(t[0]==r[i])
            {
                cout<<"1"<<endl;
                l=2;
            }
            else if(r[i]<t[m])
            {
                right=m;
                m=(m+left)/2;
            }
            else if(r[i]==t[m])
            {
                cout<<m+1<<endl;
                l=2;
            }
            else if(r[i]>t[m])
            {
                left=m;
                m=(m+right)/2;
            }
        }
        l=1;m=(a-1)/2;left=0;right=a;
    }

}
