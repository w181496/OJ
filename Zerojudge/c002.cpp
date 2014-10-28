#include <iostream>

using namespace std;

int main()
{
    int N=0;

    while(cin>>N)
    {
        if(N<=100&&N!=0)
        {
            cout<<"f91("<<N<<") = "<<"91"<<endl;
        }
        else if(N>=101)
        {
            cout<<"f91("<<N<<") = "<<N-10<<endl;
        }
        else if(N==0)
        {
            break;
        }

    }

    return 0;
}
