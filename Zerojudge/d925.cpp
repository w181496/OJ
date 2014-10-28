#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    double m,n,t,x,y,r,sum=0;
    cin>>m>>n>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y>>r;
        if(m==1&&n==1)
        {
            sum-=r;
        }
        else if(m==1||n==1)
        {
            if(!((x==1&&y==1)||(x==m&&y==n)))
                sum+=r;
        }
        else if(m==2)
        {
            if((x==1&&y==1)||(x==2&&y==1)||(x==2&&y==n)||(x==1&&y==n))
                sum+=2*r;
            else
                sum+=4*r;
        }
        else if(n==2)
        {
            if((x==1&&y==1)||(x==1&&y==2)||(x==m&&y==2)||(x==m&&y==1))
                sum+=2*r;
            else
                sum+=4*r;
        }
        else if((x==1&&y==1)||(x==m&&y==n)||(x==1&&y==n)||(x==m&&y==1))
        {
            sum+=2*r;
        }
        else if(x==1||x==m||y==1||y==n)
        {
            sum+=4*r;
        }
        else
        {
            sum+=7*r;
        }
    }
    double d=sum/m/n;
    cout <<fixed << setprecision(2) << d << endl;
    return 0;
}
