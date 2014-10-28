#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        stringstream ss;
        int sum=0,a;
        ss<<s;
        while(ss>>a)
        {
            sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
