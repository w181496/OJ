#include <iostream>


using namespace std;

int main()
{
    long long int a;


    while(cin>>a)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=a-i;j>=1;j--)
            {
                cout<<"_";
            }
                for(int y=i;y>=1;y--)
                {
                    cout<<"+";
                }
                cout<<endl;

        }

    }




    return 0;
}
