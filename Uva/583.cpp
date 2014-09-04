#include <cstdio>
#include <cmath>
main()
{
    bool prime[46341]={true};
    for(int r=2;2*r<46341;++r)
                prime[r*2]=false;
    for(int i=3;i<46341;i+=2)
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
            for(int r=2;i*r<46341;++r)
                prime[r*i]=false;
        }
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int chk=1;
        int flag=1;
        if(n==0)break;
        printf("%d = ",n);
        if(n==1){printf("1");}
        else if(n==-1){printf("-1");}
        else if(n<0){n*=-1;printf("-1 x ");}
        for(int i=2;i<=n&&flag==1;++i)
        {
            if(n<46342&&prime[n]){
                printf("%d",n);
                break;
            }
            else if(n>=46342)
            {
                int ccc=1;
                for(int w=2;w<=sqrt(n);++w)
                {
                    if(n%w==0)
                    {
                        ccc=0;
                        while(n%w==0)
                        {
                            if(n==w)
                            {
                                printf("%d",w);
                                flag=0;
                                break;
                            }
                            printf("%d x ",w);
                            n/=w;
                        }
                        break;
                    }
                }
                if(ccc==1)
                {
                    printf("%d",n);
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(n%i==0)
            {
                chk=0;
                while(n%i==0)
                {
                    if(n==i)
                    {
                        printf("%d",i);
                        flag=0;
                        break;
                    }
                    printf("%d x ",i);
                    n/=i;
                }
            }
        }
        printf("\n");
    }
}

