#include <iostream>
#include <string>
using namespace std;


int main()
{
    int t;
    while(cin >> t)
    {
        int n[t];
        int x, sum=0;
        for(int i=0;i<t;i++)
        {
            cin >> n[i];
        }
        for(int i=0;i<t;i++)
        {
            for(int j=i+1;j<t;j++)
            {
                if(n[i]>n[j])
                    sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}