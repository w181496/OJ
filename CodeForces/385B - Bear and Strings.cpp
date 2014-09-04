#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char s[5001];
    while(scanf("%s",&s)==1)
    {
        int ans=0;
        int sz=strlen(s);
        for(int i=0;i<sz-3;++i)
        {
            for(int j=i;j<sz-3;++j)
                if(s[j]=='b'&&s[j+1]=='e'&&s[j+2]=='a'&&s[j+3]=='r')
                {
                    ans+=(sz-j-3);
                    break;
                }
        }
        printf("%d\n",ans);
    }
    return 0;
}