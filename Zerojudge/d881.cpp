#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,sum=1;




    while(cin>>a)
    {
        b=48*a+1;
        for(int i=49;i>=1;i--)
        {

          c=(b+1)*i/2+1;
          b=b-a;
          sum+=c;

        }
        cout<<sum<<endl;
        sum=1;b=0;c=0;
    }


    return 0;
}
