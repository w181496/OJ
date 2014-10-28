#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        if(a=="0"&&b=="0")break;
        vector<int>n(10);
        int sum=0;
        for(int i=0;i<a.size();++i)
            n[i]=a[a.size()-i-1]-'0';
        for(int i=0;i<b.size();++i)
            n[i]+=b[b.size()-i-1]-'0';
        for(int i=0;i<10;i++)
        {
            if(n[i]>9)
            {
                n[i+1]+=n[i]/10;
                n[i]%=10;
                sum++;
            }
        }
        if(sum==0)cout<<"No carry operation."<<endl;
        else if(sum==1)cout<<"1 carry operation."<<endl;
        else cout<<sum<<" carry operations."<<endl;
    }
    return 0;
}
