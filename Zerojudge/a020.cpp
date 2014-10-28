#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    long long int b,c=0,d;

   while(cin>>a)
   {
       d=a.size()-2;
        if(a[0]<=72&&a[0]>=65)
        {
            b=a[0]-55;
        }
        else if(a[0]==73)
        {
            b=34;
        }
        else if(a[0]<=78&&a[0]>=74)
        {
            b=a[0]-56;
        }
        else if(a[0]==79)
        {
            b=35;
        }
        else if(a[0]<=86&&a[0]>=80)
        {
            b=a[0]-57;
        }
        else if(a[0]==87)
        {
            b=32;
        }
        else if(a[0]>=88&&a[0]<=89)
        {
            b=a[0]-58;
        }
        else if(a[0]==90)
        {
            b=33;
        }
        c=(b/10)+9*(b%10)+a[9]-48;
        for(int i=1;i<=d;i++)
        {
            if(a[i]!=48)
                c+=(a[i]-48)*(9-i);
        }
        if(c%10==0)
        {
            cout<<"real"<<endl;
        }
        else
        {
            cout<<"fake"<<endl;
        }
   }

    return 0;
}
