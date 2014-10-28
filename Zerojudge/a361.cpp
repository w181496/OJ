#include <cstdio>
using namespace std;
bool check(int *);
int main()
{
    int card[25],card2[25];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        for(int i=0;i<25;++i)
            scanf("%d",&card[i]);
        for(int i=0;i<25;++i)
            scanf("%d",&card2[i]);
        int winner=0;
        for(int i=0;i<25;++i)
        {
            int t;
            scanf("%d",&t);
            if(winner!=0)continue;
            for(int j=0;j<25;++j)
            {
                if(card[j]==t)card[j]=-1;
                if(card2[j]==t)card2[j]=-1;
                if(check(card)&&check(card2))winner=3;
                else if(check(card))winner=1;
                else if(check(card2))winner=2;
            }
        }
        if(winner==3)printf("0\n");
        else printf("%d\n",winner);
    }
    return 0;
}
bool check(int *card)
{
    for(int i=0;i<5;++i)
    {
        int c=0;
        for(int j=0;j<5;++j)
        {
            if(card[i*5+j]<0)c++;
        }
        if(c==5)return true;
    }
    for(int i=0;i<5;++i)
    {
        int c=0;
        for(int j=0;j<5;++j)
        {
            if(card[j*5+i]<0)c++;
        }
        if(c==5)return true;
    }
    if(card[0]==card[6]&&card[12]==card[6]&&card[18]==card[12]&&card[24]==card[18])
        return true;
    if(card[4]==card[8]&&card[12]==card[8]&&card[16]==card[12]&&card[20]==card[16])
        return true;
    return false;
}
