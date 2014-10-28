//0可能為地雷 1不是地雷
#include <iostream>

using namespace std;

int main()
{
    int t;
    int a,b,c;
    while(cin>>t)
    {
        for(int i=1;i<=t;++i)
        {
            int n[9]={3,3,3,
              3,3,3,
              3,3,3};
            cin>>a>>b>>c;

            if(b==1)
            {
                n[b]=n[b+2]=1;
            }
            else if(b==2)
            {
                n[b]=n[b-2]=n[b+2]=1;
            }
            else if(b==3)
            {
                n[b-2]=n[b+2]=1;
            }
            else if(b==4)
            {
                n[b]=n[b-4]=n[b+2]=1;
            }
            else if(b==5)
            {
                n[b]=n[b-2]=n[b-4]=n[b+2]=1;
            }
            else if(b==6)
            {
                n[b+2]=n[b-2]=n[b-4]=1;
            }
            else if(b==7)
            {
                n[b]=n[b-4]=1;
            }
            else if(b==8)
            {
                n[b]=n[b-2]=n[b-4]=1;
            }
            else
            {
                n[b-2]=n[b-4]=1;
            }
            if(c==1)
            {
                n[c]=n[c+2]=1;
            }
            else if(c==2)
            {
                n[c]=n[c-2]=n[c+2]=1;
            }
            else if(c==3)
            {
                n[c-2]=n[c+2]=1;
            }
            else if(c==4)
            {
                n[c]=n[c-4]=n[c+2]=1;
            }
            else if(c==5)
            {
                n[c]=n[c-2]=n[c-4]=n[c+2]=1;
            }
            else if(c==6)
            {
                n[c+2]=n[c-2]=n[c-4]=1;
            }
            else if(c==7)
            {
                n[c]=n[c-4]=1;
            }
            else if(c==8)
            {
                n[c]=n[c-2]=n[c-4]=1;
            }
            else
            {
                n[c-2]=n[c-4]=1;
            }
            if(a==1)
            {
                if(n[a]!=1)n[a]=0;
                if(n[a+2]!=1)n[a+2]=0;
            }
            else if(a==2)
            {
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a]!=1)n[a]=0;
                if(n[a+2]!=1)n[a+2]=0;
            }
            else if(a==3)
            {
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a+2]!=1)n[a+2]=0;
            }
            else if(a==4)
            {
                if(n[a]!=1)n[a]=0;
                if(n[a-4]!=1)n[a-4]=0;
                if(n[a+2]!=1)n[a+2]=0;
            }
            else if(a==5)
            {
                if(n[a]!=1)n[a]=0;
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a+2]!=1)n[a+2]=0;
                if(n[a-4]!=1)n[a-4]=0;
            }
            else if(a==6)
            {
                if(n[a+2]!=1)n[a+2]=0;
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a-4]!=1)n[a-4]=0;
            }
            else if(a==7)
            {
                if(n[a]!=1)n[a]=0;
                if(n[a-4]!=1)n[a-4]=0;
            }
            else if(a==8)
            {
                if(n[a]!=1)n[a]=0;
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a-4]!=1)n[a-4]=0;
            }
            else
            {
                if(n[a-2]!=1)n[a-2]=0;
                if(n[a-4]!=1)n[a-4]=0;
            }
            int chk=0;
        for(int j=0;j<9;++j)
        {
            if(n[j]==0&&chk==0)
            {
                cout<<j+1;
                chk=1;
            }
            else if(n[j]==0)
            {
                cout<<" "<<j+1;
            }
        }
        if(chk==0)cout<<"Empty";
        cout<<endl;
        }
    }
    return 0;
}
