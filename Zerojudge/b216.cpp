#include<cstdio>
#include<algorithm>
main()
{
    int x,y;
    int score=0,line=0;
    bool n[3][3];
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            n[j][i]=false;
    for(int i=1;i<=9;++i)
    {
        scanf("%d%d",&x,&y);
        if(x%10==0||y%10==0||x<0||y<0||x>30||y>30)
        {
            continue;
        }
        else
        {
            n[x/10][y/10]=true;
        }
    }
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            if(!n[j][i])continue;
            int t=i*3+j+1;
            if(t==5)score+=2;
            if(t==2||t==4||t==6||t==8)score+=5;
            if(t==1||t==3||t==7||t==9)score+=8;
        }
    }
    for(int i=0;i<3;++i)
    {
        if(n[i][0]&&n[i][1]&&n[i][2])line++;
        if(n[0][i]&&n[1][i]&&n[2][i])line++;
    }
    printf("%d %d\n",line,score);
}
