#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string F,G;
    int i,j;
    while(cin>>F>>G)
    {
        i=F.size();
        j=G.size();
        vector<int>n((i+1)*(j+1));
        for(int w=0;w<i+1;++w)
            n[w]=0;
        for(int l=1;l<j+1;l++)
        {
            for(int k=0;k<i+1;k++)
            {
                if(k==0)
                {
                    n[l*(i+1)]=0;
                }
                else
                {
                    if(F[k-1]==G[l-1])
                    {
                        n[l*(i+1)+k]=n[l*(i+1)+k-i-2]+1;
                    }
                    else
                    {
                        int h[2];
                        h[0]=n[l*(i+1)+k-1];
                        h[1]=n[l*(i+1)+k-i-1];
                        sort(h,h+2);
                        n[l*(i+1)+k]=h[1];
                    }
                }
            }
        }
        cout<<n[(i+1)*(j+1)-1]<<endl;
    }
    return 0;
}
