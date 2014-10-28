#include <iostream>

using namespace std;

int main()
{
   int t,a1,a2,a3,a4;

    while(cin>>t)
    {

        for(int i=1;i<=t;i++)
        {
            cin>>a1>>a2>>a3>>a4;
            if(a2-a1==a3-a2)
            {
                cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a3-a2+a4<<endl;
            }
            else
            {
                cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<(a3/a2)*a4<<endl;
            }
        }
    }

    return 0;
}
