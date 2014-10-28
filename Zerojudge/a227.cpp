#include <iostream>
#include <vector>
#include <string>
using namespace std;
void h(int ,char,char ,char );
int main()
{
    int n;
    while(cin>>n)
    {
        h(n,'A','B','C');
    }
    return 0;
}

void h(int n,char S,char T,char E)
{
    if(n>1)
    {
        h(n-1,S,E,T);
        cout<<"Move ring "<<n<<" from "<<S<<" to "<<E<<endl;
        h(n-1,T,S,E);
    }
    else
    {
        cout<<"Move ring "<<n<<" from "<<S<<" to "<<E<<endl;
    }
}
