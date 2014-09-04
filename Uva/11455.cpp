#include <iostream>

using namespace std;

int main()
{
    long long int t,a[4],b;

    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];

        for(int r=0;r<=3;r++)
        {
            for(int q=0;q<=3;q++)
            {
                if(a[q]<a[r])
                {
                    b=a[r];
                    a[r]=a[q];
                    a[q]=b;
                }
            }
        }
        if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
        {
            cout<<"square"<<endl;

        }
        else if(a[0]==a[1]&&a[2]==a[3]&&a[1]!=a[2])
        {
            cout<<"rectangle"<<endl;

        }
        else if(a[3]+a[2]+a[1]>a[0])
        {
            cout<<"quadrangle"<<endl;  //若四邊形三邊加起來大於最大的邊，則為 quadrangle
        }
        else
        {
            cout<<"banana"<<endl;

        }
    }

    return 0;
}

