#include <iostream>

using namespace std;

int main()
{
    long long int a,b,sum=1,d,e=0;


        for(int i=7;i>=1;i--)
        {
            cin>>a>>b;
            
            if(a+b>8)
            {
                if(a+b>e)
                {
                     e=a+b;
                    d=sum;
                }
                   
                sum++;
            }
            else
            {
                sum++;
            }
        }
        cout<<d<<endl;



    return 0;
}
