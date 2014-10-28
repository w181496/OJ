#include<string>
#include<iostream>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int flag=1;
        if(n<21)
        {
            cout<<-1<<endl;
        }
        else if(n==21)
        {
            cout<<1<<endl;
        }
        else if(30>n&&n>21)
        {
            cout<<-1<<endl;
        }
        else if(n>=30&&n<=40)
        {
            cout<<2<<endl;
        }
        else
        {
            for(int i=12;i>=2;--i)
            {
                if((n-28-i)%14==0&&n-28-i>=14)
                {
                    flag=0;
                    cout<<(n-28-i)/14+2<<endl;
                }
            }
            if(flag==1)
            {
                cout<<-1<<endl;
            }
        }
    }
}
