#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e;



    while(cin>>a)
    {
        for(int i=a;i>=1;i--)
        {
            cin>>b>>c;

        if(b>c)
        {

            d=(b+c)/2;
            e=b-d;
            if(e<0||d<0)
            {
                cout<<"impossible"<<endl;
            }

            if(d+e==b&&d-e==c)
            {
                if(d>e)
                {
                    cout<<d<<" "<<e<<endl;
                }
                else
                {
                    cout<<e<<" "<<d<<endl;
                }
            }
            else
            {
                cout<<"impossible"<<endl;
            }
        }
        else if(b==0&&c==0)
        {
            cout<<"0 0"<<endl;
        }
        else if(b==c&&b!=0)
        {
            cout<<b<<" 0"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }



                }
    }


    return 0;
}
