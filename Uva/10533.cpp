#include<cstdio>
#include<vector>
using namespace std;
main()
{
    vector<bool>prime(1000000);
    vector<int>digit(1000000);
    for(int i=2;i<1000000;++i)
    {
        int c=1;
        for(int j=2;j*j<=i;++j)
        {
            if(i%j==0)
            {
                c=0;
                break;
            }
        }
        if(c==1)
        {
            int sum=0,t;
            prime[i]=1;
            t=i;
            while(t>0)
            {
                sum+=t%10;
                t/=10;
            }
            if(prime[sum])
                digit[i]=digit[i-1]+1;
            else
                digit[i]=digit[i-1];
        }
        else
        {
            digit[i]=digit[i-1];
        }
    }
    int n,t1,t2;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d%d",&t1,&t2);
        int ans=digit[t2]-digit[t1];
        if(digit[t1]!=digit[t1-1])ans++;
        printf("%d\n",ans);
    }
}

