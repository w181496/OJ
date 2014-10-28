#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        cin>>n;
        vector<int>red,blue;
        for(int i=0;i<n;++i)
        {
            cin>>temp;
            if(temp<0)red.push_back(-temp);
            else blue.push_back(temp);
        }
        if(red.size()==0&&blue.size()==0){cout<<0<<endl;continue;}
        else if(red.size()==0||blue.size()==0){cout<<1<<endl;continue;}
        sort(red.begin(),red.end());
        sort(blue.begin(),blue.end());
        int rid=0,bid=0,ans=0,now;
        bool chk; //1blue 0red
        if(red[0]<blue[0])now=red[0],rid++,chk=true;
        else now=blue[0],bid++,chk=false;
        while(1)
        {
            if(chk&&bid==blue.size())break;
            if(!chk&&rid==red.size())break;
            if(chk)
            {
                if(blue[bid]>now)
                {
                    chk=false;
                    now=blue[bid];
                    bid++;
                    ans++;
                }
                else
                {
                    bid++;
                }
            }
            else
            {
                if(red[rid]>now)
                {
                    chk=true;
                    now=red[rid];
                    rid++;
                    ans++;
                }
                else
                {
                    rid++;
                }
            }
        }
        cout<<ans+1<<endl;
    }
}
