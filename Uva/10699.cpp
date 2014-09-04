#include <cstdio>
main()
{
    bool prime[1001];
    for(int i=1;i<1001;++i)prime[i]=true;
    for(int i=2;i<1001;++i)
    {
        if(prime[i]==false)continue;
        int c=1;
        for(int j=2;j*j<=i;++j)
        {
            if(i%j==0)
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            prime[i]=false;
            for(int r=2;i*r<1001;++r)
                prime[r*i]=false;
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        int temp=n;
        int sum=0;
        int chk=1,chk2=1,chk3=0;
        for(int i=2;i<=temp;++i)
        {
            if(temp<1001&&prime[temp])
            {
                sum++;
                break;
            }
            if(i>=1000)
            {
                sum++;
                break;
            }
            if(!prime[i])continue;
            if(temp%i==0)
            {
                chk3++;
                chk=0;
                chk2=0;
                sum++;
                while(temp%i==0)
                {
                    temp/=i;
                }
            }
        }
        if(chk==1)printf("%d : 1\n",n);
        else printf("%d : %d\n",n,sum);
    }
}

