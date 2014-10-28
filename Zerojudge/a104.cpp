#include <iostream>


using namespace std;

int main()
{
    long long int a,c=0;

    while(cin>>a)
    {
        int b[a];
        for(int i=0;i<=a-1;i++)
        {
            cin>>b[i];
        }
        for(int t=0;t<=a-1;t++)
        {
            for(int r=0;r<=a-1;r++)
            {
                if(b[t]<=b[r])
                {
                    c=b[t];
                    b[t]=b[r];
                    b[r]=c;
                }
            }
        }
        for(int p=0;p<=a-1;p++)
        {
            cout<<b[p]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
