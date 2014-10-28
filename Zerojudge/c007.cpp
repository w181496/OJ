#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int b=0;

    while(getline(cin,a))
    {
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]=='"'&&b==0)
            {
                cout<<"``";
                b=1;
            }
            else if(a[i]=='"'&&b==1)
            {
                cout<<"''";
                b=0;
            }
            else
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
