#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int t=0;
    while(getline(cin,a))
    {
        for(int i=0;i<=a.size();i++)
        {
            if(a[i]>='A'&&a[i]<='z'&&((a[i+1]<='A')||(a[i+1]>='z')))
            {
                t++;
            }
        }
        cout<<t<<endl;
        t=0;
    }


    return 0;
}
