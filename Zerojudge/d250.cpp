#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n[9][9];
    string s;
    int t=0;
    for(int r=1;r<=9;++r){
        cin>>s;
        for(int i=0;i<s.size();++i)
            n[t][i]=s[i]-'0';
        ++t;
    }
    for(int i=0;i<9;++i)
    {
        for(int j=0;j<9;++j)
        {
            if(n[i][j]==0)
            {
                bool ch[10]={1,1,1,1,1,1,1,1,1,1};
                for(int h=0;h<9;++h)
                {
                    ch[n[i][h]]=0;
                }
                for(int h=0;h<10;++h)
                    if(ch[h])cout<<h<<endl;
            }
        }
    }
    return 0;
}
