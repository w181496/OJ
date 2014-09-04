#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int s,n=0;
    int k1[12],k2[12];
    while(1)
    {
        n++;
        int sum=0;
        cin>>s;
        if(s<0)break;
        sum=s;
        cout<<"Case "<<n<<":"<<endl;
        for(int i=0;i<12;i++)
        {
            cin>>k1[i];
        }
        for(int i=0;i<12;i++)
        {
            cin>>k2[i];
        }
        for(int i=0;i<12;i++)
        {
            if(k2[i]>sum)
            {
                 cout<<"No problem. :("<<endl;
            }
            else
            {
                 cout<<"No problem! :D"<<endl;
                 sum-=k2[i];
            }

            sum+=k1[i];
        }
    }
}

