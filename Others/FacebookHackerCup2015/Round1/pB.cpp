#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define fin cin
#define fout cout
int trie[1000701][30];
int id, ans, p;
int newnode()
{
    for(int i = 0; i <= 26; ++i)
        trie[id][i] = 0;
    return id++;
}

void solve(string s)
{
    int flag = 1, idx;
    p = 1;
    for(int i = 0; i < s.size(); ++i)
    {
        ans += flag;
        idx = (s[i] - 'a');
        if(trie[p][idx] == 0)
        {
             flag = 0;
             trie[p][idx] = newnode();
        }
        p = trie[p][idx];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t, n;
    ifstream fin("autocomplete.txt");
    ofstream fout("b.out");
    string s;
    fin >> t;
    for(int i = 1; i <= t; ++i)
    {
        fin >> n;
        ans = 0;
        id = 1;
        p = newnode();
        for(int j = 0; j < n; ++j)
        {
            fin >> s;
            solve(s);
        }
        fout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
