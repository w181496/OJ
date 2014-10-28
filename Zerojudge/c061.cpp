#include<iostream>
using namespace std;
int main()
{
    unsigned long long n=1,k=1,i,sum;
    while (cin >> n >> k)
    {
        if (n==0 && k==0)
            break;
        else if (n/2<k)
            k=n-k;
        sum=1;
        for (i=1; i<=k; i++)
        {
            sum *= n--;
            sum /= i;
        }
        cout << sum <<endl;
    }
    return 0;
}
