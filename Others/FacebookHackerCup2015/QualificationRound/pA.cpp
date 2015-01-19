#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    string s, mn, mx, tmp;
    ifstream fin("cooking_the_books.txt");
    ofstream fout("out.out");
    while(fin >> t)
    {
        for(int k = 0; k < t; ++k)
        {
            fin >> s;
            mx = mn = s;
            for(int i = 0; i < s.size(); ++i)
            {
                for(int j = i + 1; j < s.size(); ++j)
                {
                     if(i == 0 && s[j] == '0') continue;
                     tmp = s;
                     tmp[i] = s[j];
                     tmp[j] = s[i];
                     if(tmp > mx) mx = tmp;
                     if(tmp < mn) mn = tmp;
                }
            }
            fout << "Case #" << k + 1 <<": " << mn << " " << mx << endl;
        }
    }

    return 0;
}
