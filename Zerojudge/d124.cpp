#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    long long int n=0;


    while(cin>>a)
    {
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]=='-')
            {
                continue;
            }

            else
            {
               n+=a[i]-'0';
            }
        }
        if(n%3==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        n=0;
    }
    return 0;
}
