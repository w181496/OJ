#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int stringtoint(string);
int main()
{
    string s,str;
    int p[6]={0,1,5,10,25,50};
    unsigned long long int P,i=1,j=0,n=5;
        P=30000;
        unsigned long long int w[30001];
        vector<unsigned long long int>k((n+1)*(P+1));
        for(i=1;i<=n;++i)
        {
            for(j=0;j<=P;j++)
            {
                if(p[i]>=0&&j==0)
                    k[i*(P+1)+j]=1;
                else if(p[i]==0&&j>0)
                    k[i*(P+1)+j]=0;
                else if(p[i]>j)
                    k[i*(P+1)+j]=k[(i-1)*(P+1)+j];
                else
                    k[i*(P+1)+j]=k[(i-1)*(P+1)+j]+k[i*(P+1)+j-p[i]];
                w[j]=k[i*(P+1)+j];
            }
        }
        while(getline(cin,s))
        {
            stringstream ss;
            int sum=0;
            ss<<s;
            while(ss>>str)
            {
                sum+=stringtoint(str);
            }
            //if(sum==0)cout<<"There is only 1 way to produce 0 cents change."<<endl;
            if(w[sum]==1)cout<<"There is only 1 way to produce "<<s<<" cents change."<<endl;
            else cout<<"There are "<<w[sum]<<" ways to produce "<<s<<" cents change."<<endl;
        }

    return 0;
}
int stringtoint(string s)
{
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
        sum=sum*10+s[i]-'0';
    }
    return sum;
}
