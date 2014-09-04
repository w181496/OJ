#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n%27==0)cout<<"sad"<<endl;
        else if(n%9==0)cout<<"happy"<<endl;
        else if(n%3==0)cout<<"sad"<<endl;
        else cout<<"happy"<<endl;
    }

    return 0;
}