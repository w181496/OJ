#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a=1,b=1,c=1,t,n;

    while(cin>>t)
    {
        int q[t],w[t],e[t];
        for(int i=1;i<=t;i++)
        {
            cin>>n;
            if(n==1)
            {
                q[a]=n;
                a++;
            }
            else if(n==2)
            {
                w[b]=n;
                b++;
            }
            else if(n==3)
            {
                e[c]=n;
                c++;
            }
        }
        for(int i=1;i<=a-1;i++)
        {
            cout<<q[i]<<" ";
        }
        for(int i=1;i<=b-1;i++)
        {
            cout<<w[i]<<" ";
        }
        for(int i=1;i<=c-1;i++)
        {
            cout<<e[i]<<" ";
        }
        cout<<endl;
        a=1;b=1;c=1;
    }


    return 0;
}
