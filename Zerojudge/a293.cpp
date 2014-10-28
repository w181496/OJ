#include <iostream>
using namespace std;
int main()
{
    int p;
    int n[5][5];
    cin>>p;
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            cin>>n[i][j];
        }
    }
    int t;
    for(int k=1;k<p;++k)
    {
        int sum=0;
        for(int i=0;i<5;++i)
        {
            for(int j=0;j<5;++j)
            {
                cin>>t;
                if(n[i][j]>t)
                {
                    sum+=2;
                }
                else if(n[i][j]==t&&t==1)
                {
                    sum+=1;
                }
                else if(n[i][j]==t&&t==8)
                {
                    sum+=5;
                }
                else
                {
                    sum+=7;
                }
                n[i][j]=t;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
