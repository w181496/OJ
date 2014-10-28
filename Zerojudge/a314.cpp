#include <iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int sx,sy,now=0,max=0;
        cin>>n>>m;
        int s[m][n];
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                cin>>s[j][i];
                if(s[j][i]==0)
                {
                    sx=j;
                    sy=i;
                }
                if(s[j][i]>max)max=s[j][i];
            }
        }
        int N=0,S=0,W=0,E=0;
        while(now!=max)
        {
            if(s[sx+1][sy]==now+1)
            {
                if(N>0)cout<<"N"<<N;
                if(S>0)cout<<"S"<<S;
                if(W>0)cout<<"W"<<W;
                N=S=W=0;
                E++;
                sx++;
                now++;
            }
            else if(s[sx-1][sy]==now+1)
            {
                if(N>0)cout<<"N"<<N;
                if(S>0)cout<<"S"<<S;
                if(E>0)cout<<"E"<<E;
                N=S=E=0;
                W++;
                sx--;
                now++;
            }
            else if(s[sx][sy+1]==now+1)
            {
                if(N>0)cout<<"N"<<N;
                if(W>0)cout<<"W"<<W;
                if(E>0)cout<<"E"<<E;
                N=W=E=0;
                S++;
                sy++;
                now++;
            }
            else if(s[sx][sy-1]==now+1)
            {
                if(S>0)cout<<"S"<<S;
                if(W>0)cout<<"W"<<W;
                if(E>0)cout<<"E"<<E;
                S=W=E=0;
                N++;
                sy--;
                now++;
            }
        }
        if(N>0)cout<<"N"<<N;
        if(W>0)cout<<"W"<<W;
        if(E>0)cout<<"E"<<E;
        if(S>0)cout<<"S"<<S;
        cout<<endl;
    }
    return 0;
}
