#include <iostream>
#include <sstream>
using namespace std;
int check(string);
int main()
{
    long long int n, sum=0;
    string s;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> s;
        sum+=check(s);
    }
    cout<<sum<<endl;
    return 0;
}
int check(string s)
{
    int sum=0;
    for(int i=2;i<=5;i++)
    {
        int t=1;
        for(int j=i+1;j<=5;j++)
        {
            if(s[i]==s[j])t++;
        }
        if(t>sum)sum=t;
    }
    if(sum==3)return 1000;
    else if(sum==4)return 2000;
    else if(s[2]==s[3]&&s[4]==s[5])return 1500;
    return 0;
}