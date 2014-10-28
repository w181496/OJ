#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int p[12]={0,5,10,20,50,100,200,500,1000,2000,5000,10000};
    unsigned long long int P,i=1,j=0,num1,num2,n=11;
    char ch;
    num1=300;num2=0;
        P=30000;
        unsigned long long int w[30000];
        vector<unsigned long long int>k((n+1)*(P+1));
        for(i=1;i<=n;++i)
        {
            for(j=0;j<=P;j+=5)
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
        while(cin>>num1>>ch>>num2)
        {
            P=num1*100+num2;
            if(P==0)break;
            cout<<setfill (' ') << setw (3)<<num1<<ch;
            cout<<setfill ('0') << setw (2)<<num2<<setfill (' ') << setw (17)<<w[P]<<endl;
        }
    return 0;
}
