#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,sum=0;
    int x=0;




    while(cin>>a)
    {
        if(a==0)
         break;
        for(int i=a;i>=1;i--)
        {
            cin>>b;
            if(x==0)
            {
               c=b;
               x++;
            }
            else if(b>c&&x!=0)
            {
                sum=(b-c)*20+sum;
                c=b;
            }
            else if(b<c&&x!=0)
            {
                sum=(c-b)*10+sum;
                c=b;
            }
        }
        cout<<sum<<endl;
        sum=0;
        x=0;c=0;
    }


    return 0;
}
