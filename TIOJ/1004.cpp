#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int ab(int);
int main()
{
    int a,b,c;
    while(cin>>a)
    {
       cout<<ab(a)<<endl;
    }
    return 0;
}
int ab(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else if(n%2==0)return 2*ab(n/2)-1;
    else return 2*ab(n/2)+1;
}