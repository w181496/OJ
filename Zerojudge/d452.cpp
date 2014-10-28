#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int sum=0,great;
        cin>>m;
        int k[m],max=0,min=0;
        for(int j=0;j<m;++j)
        {
            cin>>k[j];
            if(max<k[j])max=k[j];
            if(min>k[j])min=k[j];
        }
        for(int l=0;l<m;++l)
        {
            if(k[l]>min)
                sum+=(k[l]-min);
            else
                sum+=(min-k[l]);
        }
        great=sum;
        for(int j=min+1;j<=max;++j)
        {
            sum=0;
            for(int l=0;l<m;++l)
            {
                if(k[l]>j)
                    sum+=(k[l]-j);
                else
                    sum+=(j-k[l]);
            }
            if(sum<great)great=sum;
        }
        cout<<great<<endl;
    }
    return 0;

}
