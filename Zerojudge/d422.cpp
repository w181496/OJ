#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    long long int b,e=0;

   while(cin>>a){
        b=a.size()-1;
        for(int i=0;i<=b;i++)
        {
            if(a[i]>=48&&a[i]<=57)
            {
                e=a[i]-48+e;
            }
            else if(a[i]=='!')
            {
                cout<<endl;
            }
            else
            {
                for(int y=1;y<=e;y++)
                {
                    if(a[i]=='b')
                    {
                        cout<<" ";
                    }
                    else
                    {
                     cout<<a[i];

                    }
                }
                e=0;
            }
        }
        cout<<endl;
   }

    return 0;
}
