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
    int p[11]={0,1,5,10,20,50,100,200,500,1000,2000};
    unsigned long long int P,i=1,j=0,n=10;
        P=50000;
        unsigned long long int w[50001];
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
            if(sum==0)break;
            cout<<w[sum]-1<<endl;
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
