#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int n,t=0;
    while(cin>>n)
    {
        vector<int>k;
        if(n==0)break;
        while(n>0)
        {
            k.push_back(n%2);
            if(n%2==1)
                t++;
            n/=2;
        }
        cout<<"The parity of ";
        for(int i=k.size()-1;i>=0;--i)
            cout<<k[i];
        cout<<" is ";
        cout<<t;
        cout<<" (mod 2)."<<endl;
        t=0;
    }
    return 0;
}