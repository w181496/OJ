#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int p[6]={0,1,5,10,25,50};
    int P,n=5;
    while(cin>>P)
    {
       vector<int>k((P+1)*(n+1));
       for(int i=0;i<=n;++i)
       {
           for(int j=0;j<=P;j++)
           {
               if(j==0&&i>=0)
               {
                   k[i*(P+1)+j]=1;
               }
               else if(j>=0&&i==0)
               {
                   k[i*(P+1)+j]=0;
               }
               else if(p[i]>j)
               {
                   k[i*(P+1)+j]=k[(i-1)*(P+1)+j];
               }
               else
               {
                   k[i*(P+1)+j]=k[(i-1)*(P+1)+j]+k[i*(P+1)+j-p[i]];
               }
           }
       }
       cout<<k.back()<<endl;
    }

return 0;
}
