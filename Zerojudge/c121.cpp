#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int s;
    while(cin>>s)
    {
        vector<int>a(1500),b(1500),c(1500);
        int al=1,bl=1,cl=1;
        a[0]=1;
        b[0]=1;
        if(s>2)
        {
            for(int j=1;j<s;j++)
            {
                for(int i=0;i<al;i++)
                    c[i]+=a[i];
                for(int i=0;i<cl;i++)
                {
                    if(c[i]>9)
                    {
                        c[i+1]+=c[i]/10;
                        c[i]%=10;
                        if(i==cl-1)cl++;
                    }
                }
                a=b;
                al=bl;
                b=c;
                bl=cl;
            }
            cout<<"The Fibonacci number for "<<s<<" is ";
            for(int i=cl-1;i>=0;i--)
                cout<<c[i];
            cout<<endl;
        }
        else
        {
            if(s==0)cout<<"The Fibonacci number for 0 is 0"<<endl;
            else cout<<"The Fibonacci number for "<<s<<" is 1"<<endl;
        }
    }

    return 0;
}
