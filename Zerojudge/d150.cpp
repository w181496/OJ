#include <iostream>
#include <string>

using namespace std;

int main()
{
    long int t,n;
    int j,k=0;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int p[n];
        for(int a=0;a<=n-1;a++)
        {
            cin>>p[a];
        }
        //排序
        for(int b=0;b<=n-1;b++)
        {
            for(int c=0;c<=n-1;c++)
            {
                if(p[b]>p[c])
                {
                    j=p[b];
                    p[b]=p[c];
                    p[c]=j;
                }
            }
        }
        for(int r=1;r<=n;r++)
        {
            if(3*r<=n)
            {
              k+=p[3*r-1];
            }

        }
        cout<<k<<endl;
        k=0;
    }

    return 0;
}
