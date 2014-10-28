#include <iostream>
#include <cstdio>
using namespace std;
int fun(int a,int b,int c)
{
    if(c==0)return a*b;
    else if(c==1)return a+b;
    else return a-b;
}
int main()
{
    int t[5];
    while(scanf("%d%d%d%d%d",&t[0],&t[1],&t[2],&t[3],&t[4])&&!(t[0]==0&&t[1]==0&&t[2]==0&&t[3]==0&&t[4]==0))
    {
        int chk=true;
        for(int i=0;i<3&&chk;++i)
        {
            for(int j=0;j<3&&chk;++j)
            {
                for(int k=0;k<3&&chk;++k)
                {
                    for(int m=0;m<3&&chk;++m)
                    {
                        for(int w=0;w<5&&chk;++w)
                        {
                            for(int x=0;x<5&&chk;++x)
                            {
                                for(int y=0;y<5&&chk;++y)
                                {
                                    for(int z=0;z<5&&chk;++z)
                                    {
                                        for(int p=0;p<5&&chk;++p)
                                        {
                                            if(w==x||w==y||w==z||w==p||x==y||x==z||x==p||y==z||y==p||z==p)continue;
                                            int ans=fun(fun(fun(fun(t[w],t[x],i),t[y],j),t[z],k),t[p],m);
                                            if(ans==23)
                                            {
                                                chk=false;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(chk)puts("Impossible");
        else puts("Possible");
    }
    return 0;
}
