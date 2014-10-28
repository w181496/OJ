#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int k,t;
    while(cin>>k)
    {
        if(k==0)break;
        vector<int> n(k);
        for(int i=0;i<k;++i)
        {
            cin>>t;
            n[i]=t;
        }
        for(int i=0;i<k;++i)
        {
            for(int j=i+1;j<k;++j)
            {
                for(int a=j+1;a<k;++a)
                {
                    for(int b=a+1;b<k;++b)
                    {
                        for(int c=b+1;c<k;++c)
                        {
                            for(int d=c+1;d<k;++d)
                            {
                                if(i==j||i==a||i==b||i==c||i==d||j==a||j==b||j==c||j==d||a==b||a==c||a==d||b==c||b==d||c==d)
                                    continue;
                                cout<<n[i]<<" "<<n[j]<<" "<<n[a]<<" "<<n[b]<<" "<<n[c]<<" "<<n[d]<<endl;
                            }
                        }
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
