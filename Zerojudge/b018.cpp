#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int x,y,t,max=0;
   while(cin>>y>>x)
    {
        if(x==0&&y==0)break;
        vector<short>n(x),n2(x);
        for(int i=0; i<x; i++)
        {
            cin>>t;
            if(t!=2)
            {
                n[i]=1;
                max=1;
            }
            else
            {
                n[i]=0;
            }
        }
        for(int k=1; k<y; k++)
        {
            for(int j=0; j<x; j++)
            {
                cin>>t;
                if(j==0)
                {
                    if(t!=2)
                    {
                        n2[0]=1;
                        if(n2[0]>max)max=n2[0];
                    }
                    else
                    {
                        n2[0]=0;
                    }
                    continue;
                }
                if(t!=2)
                {
                    int s[3];
                    s[0]=n2[j-1];
                    s[1]=n[j];
                    s[2]=n[j-1];
                    sort(s,s+3);
                    n2[j]=s[0]+1;
                    if(n2[j]>max)max=n2[j];
                }
                else
                {
                    n2[j]=0;
                }
            }
            n=n2;
        }
        cout<<max*max<<endl;
            max=0;
    }
    return 0;
}
