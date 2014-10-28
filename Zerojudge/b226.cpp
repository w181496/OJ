#include <iostream>

using namespace std;

int main()
{
    long long int L,W,x,y;

    while(cin>>L>>W>>x>>y)
    {
        if(L==0&&W==0&&x==0&&y==0)break;
        if((W*L)%(x*y)!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<(W*L)/(x*y)<<endl;
        }
    }

    return 0;
}
