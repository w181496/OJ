#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s,l;
    char c;
    while(cin.get(c))
    {
        if('a'<=c&&c<='z'||'A'<=c&&c<='Z')
            l += c;
        else if(c==' '||c=='\n')
            l += ' ';
        else if(c>='0'&&c<='9')
            l+=c;
    }
    stringstream ss(l);
    int z=0;
    while(ss>>s)
        ++z;
    cout << z << endl;
}
