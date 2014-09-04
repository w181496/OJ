#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==1)
        {
            for(int j=1;j<=a;++j)
            {
                for(int k=a-j;k>=1;--k)
                {
                    cout<<" ";
                }
                for(int i=1;i<=j+j-1;i++)
                {
                   cout<<"*";
                }
                cout<<endl;
            }

        }
        else
        {
            for(int j=1;j<=a;++j)
            {
                for(int k=a-j;k>=1;--k)
                {
                    cout<<" ";
                }
                for(int i=1;i<=j+j-1;i++)
                {
                   if(i>=2&&i<j+j-1&&j!=a)
                    cout<<" ";
                   else
                   cout<<"*";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}