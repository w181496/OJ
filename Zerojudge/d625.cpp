#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>ch[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            int c=0;
            if(ch[i][j]=='*')continue;
            if(i>0&&j>0&&ch[i-1][j-1]=='*')c++;
            if(j>0&&ch[i][j-1]=='*')c++;
            if(i<n-1&&j>0&&ch[i+1][j-1]=='*')c++;
            if(i>0&&ch[i-1][j]=='*')c++;
            if(i<n-1&&ch[i+1][j]=='*')c++;
            if(i>0&&j<n-1&&ch[i-1][j+1]=='*')c++;
            if(j<n-1&&ch[i][j+1]=='*')c++;
            if(i<n-1&&j<n-1&&ch[i+1][j+1]=='*')c++;
            if(c==0)
            {
                continue;
            }
            else
            {
                ch[i][j]='0'+c;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            printf("%c",ch[i][j]);
            //cout<<ch[i][j];
        }
        printf("\n");
    }
    return 0;
}
