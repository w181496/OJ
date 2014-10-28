#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c;
    int A=0,B=0,C=0;



    while(cin>>a>>b>>c)
    {
        if(a>b&&b>c)
        {
            if(b+c>a)
            {
                B++;
            }
            else
            {
                A++;
            }
        }
        else if(a>c&&c>b)
        {
            if(c+b>a)
            {
                C++;
            }
            else
            {
                A++;
            }
        }
        else if(b>a&&a>c)
        {
            if(a+c>b)
            {
                A++;
            }
            else
            {
                B++;
            }
        }
        else if(b>c&&c>a)
        {
            if(c+a>b)
            {
                C++;
            }
            else
            {
                B++;
            }
        }
        else if(c>a&&a>b)
        {
            if(a+b>c)
            {
                A++;
            }
            else
            {
                C++;
            }
        }
        else if(c>b&&b>a)
        {
            if(b+a>c)
            {
                B++;
            }
            else
            {
                C++;
            }
        }
        else if(a==b&&b>c)
        {
            B++;
        }
        else if(a==b&&b<c)
        {
            if(b+a>c)
            {

            }
            else
            {
                C++;
            }
        }

        else if(b==c&&c<a)
        {
            if(b+c>a)
            {

            }
            else
            {
                A++;
            }
        }
        else if(a==c&&c<b)
        {
            if(a+c<b)
            {
                B++;
            }
        }


       if(A==1)
       {
           cout<<"A"<<endl;
       }
       else if(B==1)
       {
           cout<<"B"<<endl;
       }
       else if(C==1)
       {
           cout<<"C"<<endl;
       }

       A=0;B=0;C=0;
    }


    return 0;
}
