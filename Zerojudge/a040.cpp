#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1,n2,t,c=0,p=1,sum=0,g=0;
    int a[100];

    while(cin>>n1>>n2)
    {
        for(int i=n1;i<=n2;i++)
        {
            t=i;
            while(t>=10)
            {
                a[c]=t%10;
                t=(t-t%10)/10;
                c++;
            }
            a[c]=t;
            for(int x=0;x<=c;x++){
                for(int q=1;q<=c+1;q++)
                {
                    p*=a[x];
                }
                sum+=p;
                p=1;
            }
            if(i==sum)
            {
                cout<<sum<<" ";
                g++;
            }
            sum=0;
            c=0;
        }
        cout<<endl;
        if(g==0)cout<<"none"<<endl;
        g=0;
    }
    return 0;
}
