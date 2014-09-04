#include <cstdio>

using namespace std;

int g(int x)
{
    if(x<=2)return x*x-1;
    return 2;
}

int h(int x)
{
    if(x<2)return -1;
    else if(x%3==2)return 2;
    else if((x/3)%2==0)return -1;
    else return 5;
}

int f(int x)
{
    if(x>=5)
    {
        int s=0;
        for(int i=6;i<=x;++i)
            s+=h(i);
        return -3-s;
    }
    else if(x<=-2)
    {
        return f(g(x))-g(x);
    }
    else
    {
        if(x==-1)return 1;
        else if(x==0)return 2;
        else if(x==1)return 3;
        else if(x==2)return 1;
        else if(x==3)return -1;
        else if(x==4)return -1;
    }
}
int main()
{
    int x;
    while(scanf("%d",&x)==1)printf("%d\n",f(x));
    return 0;
}