#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int a=1, b=1,c=1;

    cin>>a;
    for(int i=a;i>=1;i--)
    {
        cin>>b>>c;
        if(b>c)
        {
            cout<<">"<<endl;
        }
        else if(b<c)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }

    return 0;
}
