#include <iostream>

using namespace std;

int main()
{

    int a=0,b=0;

    while(cin>>a>>b)
    {
        if(a>=7&&a<17)
        {
            if(a==7&&b<30)
            {
                cout<<"Off School"<<endl;
            }
            else if(a>17)
            {
                cout<<"Off School"<<endl;
            }
            else
            {
                cout<<"At School"<<endl;
            }
        }
        else if((a<7||a>=17)&&a>0&&24>=a&&b>=0&&60>=b)
        {
            cout<<"Off School"<<endl;
        }

    }

    return 0;
}
