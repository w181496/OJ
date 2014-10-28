#include <iostream>


using namespace std;

int main()
{
     int a,b=0,c=0,d=1;

    while(cin>>a)
    {
        if(a==0)break;
        int j[a];
       for(int i=0;i<=a-1;i++)
       {
           cin>>j[i];
           b+=j[i];
       }
       b/=a;
        for(int i=0;i<=a-1;i++)
        {
            if(j[i]>b)
            {
                c+=j[i]-b;
            }
            else if(j[i]<b)
            {
                c+=b-j[i];
            }
        }
        cout<<"Set #"<<d<<endl;
        cout<<"The minimum number of moves is "<<c/2<<"."<<endl;
        c=0;b=0;
        d++;
    }
    return 0;
}
