#include <iostream>
#include <string>
using namespace std;
int main()
{
    string N;
    long long int sum1=0,sum2=0;
    while(cin>>N)
    {
        if(N=="0")break;
        for(int i=0;i<=N.size()-1;i++)
            if(i%2==0)
                sum1+=N[i]-'0';
            else
                sum2+=N[i]-'0';
        if((sum1-sum2==0)||(sum1-sum2)%11==0)
            cout<<N<<" is a multiple of 11."<<endl;
        else
            cout<<N<<" is not a multiple of 11."<<endl;
        sum1=0;sum2=0;
    }
    return 0;
}
