#include <iostream>
#include <string>
using namespace std;

int chk[7][7];

struct Dice
{
    int p[6];
    void N()
    {
        int ta = p[0], tb = p[1], tc = p[5], td = p[4];
        p[0] = tb;
        p[1] = tc;
        p[5] = td;
        p[4] = ta;

    }
    void S()
    {
        int ta = p[0], tb = p[1], tc = p[5], td = p[4];
        p[0] = td;
        p[1] = ta;
        p[4] = tc;
        p[5] = tb;

    }
    void W()
    {
        int ta = p[0], tb = p[2], tc = p[3], td = p[5];
        p[0] = tb;
        p[2] = td;
        p[3] = ta;
        p[5] = tc;

    }
    void E()
    {
        int ta = p[0], tb = p[2], tc = p[3], td = p[5];
        p[0] = tc;
        p[2] = ta;
        p[3] = td;
        p[5] = tb;

    }
};

void init()
{
    chk[4][2] = chk[2][3] = chk[3][5] = chk[5][4] = 1;
    chk[1][4] = chk[4][6] = chk[6][3] = chk[3][1] = 2;
    chk[1][2] = chk[2][6] = chk[6][5] = chk[5][1] = 3;
    chk[2][1] = chk[1][5] = chk[5][6] = chk[6][2] = 4;
    chk[4][1] = chk[1][3] = chk[3][6] = chk[6][4] = 5;
    chk[2][4] = chk[4][5] = chk[5][3] = chk[3][2] = 6;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, a, b;
    string str;
    Dice d[11];
    cin >> n >> m;
    init();
    for(int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        d[i].p[0] = a;
        d[i].p[1] = b;
        d[i].p[5] = 7 - a;
        d[i].p[4] = 7 - b;
        d[i].p[2] = chk[d[i].p[0]][d[i].p[1]];
        d[i].p[3] = 7 - d[i].p[2];
    }
    cin >> str;
    for(int i = 0; i < str.size(); ++i)
        if(str[i] == 'N')
            for(int j = 0; j < n; ++j) d[j].N();
        else if(str[i] == 'S')
            for(int j = 0; j < n; ++j) d[j].S();
        else if(str[i] == 'W')
            for(int j = 0; j < n; ++j) d[j].W();
        else
            for(int j = 0; j < n; ++j) d[j].E();
    for(int i = 0; i < n; ++i) cout << d[i].p[0] << endl;
    return 0;

}

