#include <iostream>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {
        int t[n][n];
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                cin>>t[i][j];
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(i==0&&j==0)
                {
                    continue;
                }
                else if(i==0)
                {
                    t[i][j]+=t[i][j-1];
                }
                else if(j==0)
                {
                    t[i][j]+=t[i-1][j];
                }
                else
                {
                    if(t[i-1][j]>t[i][j-1])
                    {
                        t[i][j]+=t[i-1][j];
                    }
                    else
                    {
                        t[i][j]+=t[i][j-1];
                    }
                }
            }
        }
        cout<<t[n-1][n-1]<<endl;
    }
    return 0;
}
