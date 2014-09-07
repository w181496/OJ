#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s, ans;
    int n, m, idx=s.size()-1, rec=idx, rec_id;
    cin>>n>>m>>s;
    tmp=s;
    bool finded=true, chk=true;
    while(finded)
    {
        tmp[idx]++;
        for(int i=idx;i>=0;--i)
            if((tmp[i]-'a'+1)>m)
            {
                if(i==0){
                    finded=false;
                    ans="NO";
                    break;
                }
                tmp[i]='a';
                tmp[i-1]++;
                rec=i-1;
            }
            else
            {
                break;
            }
        if(!finded)break;
        for(int i=rec;i<n;++i)
        {
            if((i==1&&tmp[i]!=tmp[i-1])||(i>=2&&tmp[i]!=tmp[i-1]&&tmp[i]!=tmp[i-2])||i==0)
            {
                continue;
            }
            else
            {
                chk=false;
                gg=i;
                break;
            }
        }
        if(chk)
        {
            ans=tmp;
            break;
        }
        else
        {
            for(int i=rec_id+1;i<n;++i)tmp[i]=('a'+m-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
