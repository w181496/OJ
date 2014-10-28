#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int sum=1080;

    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        if(a>b)
        {
            sum=(a-b)*9+sum;
        }
        else if(a<b)
        {
            sum=((40-b)+a)*9+sum;
        }
        if(c>b)
        {
            sum=(c-b)*9+sum;
        }
        else if(c<b)
        {
            sum=((40-b)+c)*9+sum;
        }
          if(c>d)
        {
            sum=(c-d)*9+sum;
        }
        else if(c<d)
        {
            sum=((40-d)+c)*9+sum;
        }
        cout<<sum<<endl;
        sum=1080;
    }


    return 0;
}
