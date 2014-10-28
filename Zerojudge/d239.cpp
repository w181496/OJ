/* 跑答案之程式碼:
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int count(int);
bool check(int);
int main()
{
    for(int i=1;;++i)
    {
        if(count(i)==count(i+1)&&count(i)==count(i+2)&&count(i)==count(i+3)&&count(i)==3)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
bool check(int n)
{
    for(int i=2; i*i<=n; ++i)
    {
        if(n%i==0)return false;
    }
    return true;
}
int count(int n)
{
    int t=0;
    while(!check(n))
    {
        for(int i=2; i*i<=n; ++i)
        {
            if(n%i==0)
            {
                t++;
                while(n%i==0)
                {
                    n/=i;
                }
            }
        }
    }
    return t;
}

*/
#include <iostream>

using namespace std;

int main()
{
    cout<<134043<<endl;
}
