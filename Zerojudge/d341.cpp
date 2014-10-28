// Rujia Liu
#include<cstdio>
#include<cstring>
const char* mahjong[] =
{
    "1T","2T","3T","4T","5T","6T","7T","8T","9T",
    "1S","2S","3S","4S","5S","6S","7S","8S","9S",
    "1W","2W","3W","4W","5W","6W","7W","8W","9W",
    "DONG","NAN","XI","BEI",
    "ZHONG","FA","BAI"
};
int convert(char *s)
{
    for(int i = 0; i < 34; i++)
        if(strcmp(mahjong[i], s) == 0) return i;
    return -1;
}
int c[34];
bool search(int dep)
{
    int i;
    for(i = 0; i < 34; i++) if (c[i] >= 3)
        {
            if(dep == 3) return true;
            c[i] -= 3;
            if(search(dep+1)) return true;
            c[i] += 3;
        }
    for(i = 0; i <= 24; i++) if (i % 9 <= 6 && c[i] >= 1 && c[i+1] >= 1 && c[i+2] >= 1)  											//顺子
        {
            if(dep == 3) return true;
            c[i]--;
            c[i+1]--;
            c[i+2]--;
            if(search(dep+1)) return true;
            c[i]++;
            c[i+1]++;
            c[i+2]++;
        }
    return false;
}
bool check()
{
    int i;
    for(i = 0; i < 34; i++)
        if(c[i] >= 2)
        {
            c[i] -= 2;
            if(search(0)) return true;
            c[i] += 2;
        }
    return false;
}
main()
{
    int caseno = 0, i, j;
    bool ok;
    char s[100];
    int mj[15];
    while(scanf("%s", &s) == 1)
    {
        if(s[0] == '0') break;
        printf("Case %d:", ++caseno);
        mj[0] = convert(s);
        for(i = 1; i < 13; i++)
        {
            scanf("%s", &s);
            mj[i] = convert(s);
        }
        ok = false;
        for(i = 0; i < 34; i++)
        {
            memset(c, 0, sizeof(c));
            for(j = 0; j < 13; j++) c[mj[j]]++;
            if(c[i] >= 4) continue;
            c[i]++;
            if(check())
            {
                ok = true;
                printf(" %s", mahjong[i]);
            }
            c[i]--;
        }
        if(!ok) printf(" Not ready");
        puts("");
    }
}
