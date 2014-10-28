#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
        {
            int x=0,y=0,z=0,k=0;
            cin>>s;
            for(int j=0;j<s.size();++j)
            {
                if(s[j]=='O')x++;
                else if(s[j]=='X')y++;
            }
            cin>>s;
            for(int j=0;j<s.size();++j)
            {
                if(s[j]=='O')z++;
                else if(s[j]=='X')k++;
            }
            if(x==z&&y==k&&x+y==z+k)cout<<"NO"<<endl;
            else if(x==z-1&&y==k&&x+y==z+k-1)cout<<"NO"<<endl;
            else if(x==z+1&&y==k&&x+y==z+k+1)cout<<"NO"<<endl;
            else if(x==z&&y==k+1&&x+y==z+k-1)cout<<"NO"<<endl;
            else if(x==z&&y==k-1&&x+y==z+k+1)cout<<"NO"<<endl;
            else if((x==1&&y==0&&z==0&&k==1)||(x==0&&y==1&&z==1&&k==0))cout<<"NO"<<endl;
            else if(x>z)cout<<"A"<<endl;
            else cout<<"B"<<endl;
        }
    }
    return 0;
}
