#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int c=0;

    while(cin>>a>>b)
    {

            for(int i=a;i<=b;i++)
            {
                if(i%4==0&&i%100!=0)
                {
                    c++;
                }
                else if(i%400==0)
                {
                    c++;
                }

            }

        cout<<c<<endl;
        c=0;
    }

    return 0;
}
