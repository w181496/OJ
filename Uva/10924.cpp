#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int>prime(1041);
    for(int i=2; i<1041; ++i)
    {
        for(int j=2; j*j<=i; ++j)
        {
            if(i%j==0)
            {
                prime[i]=1;
                break;
            }
        }
    }
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                sum+=s[i]-'a'+1;
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                sum+=s[i]-'A'+27;
            }
        }
        if(prime[sum])
            cout<<"It is not a prime word."<<endl;
        else
            cout<<"It is a prime word."<<endl;
    }
    return 0;
}

