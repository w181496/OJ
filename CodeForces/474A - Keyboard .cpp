#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;
typedef long long LL;
int main()
{
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    char ch;
    int off;
    cin>>ch>>s;
    off=(ch=='L'?1:-1);
    for(int i=0;i<s.size();++i)
    {
         for(int j=0;j<key.size();++j)
         {
                if(s[i]==key[j])
                {
                    cout<<key[j+off];
                    break;
                }
         }
    }
    cout<<endl;
    return 0;
}
