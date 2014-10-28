#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
        vector<int>n(42);
        for(int i = 0; i < 42; ++i)
            cin>>n[i];
        for(int a = 1; a < 7; ++a)
        {
            for(int b = 1; b < 7; ++b)
            {
                for(int c = 1; c < 7; ++c)
                {
                    for(int d = 1; d < 7; ++d)
                    {
                        for(int e = 1; e < 7; ++e)
                        {
                            for(int f = 1; f < 7; ++f)
                            {
                                int x=0;
                                if(a==b||b==c||c==d||d==e||e==f||a==c||b==d||c==e||d==f||a==d||b==e||c==f||a==e||b==f||a==f)
                                {
                                    continue;
                                }
                                for(int i=0;i<=35;i+=7)
                                {
                                    int t=0;
                                    if(a==n[0+i])
                                        t++;
                                    if(b==n[1+i])
                                        t++;
                                    if(c==n[2+i])
                                        t++;
                                    if(d==n[3+i])
                                        t++;
                                    if(e==n[4+i])
                                        t++;
                                    if(f==n[5+i])
                                        t++;
                                    if(t!=n[6+i])
                                    {
                                       x=1;
                                       break;
                                    }
                                }
                                if(x==0)
                                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
                            }
                        }
                    }
                }
            }
        }
}
