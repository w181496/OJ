#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        if(n==0&&s=="0")break;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
                cout<<" ";
                for(int j=1;j<=n;j++)
                    cout<<"-";
                cout<<" ";
            }
            else if(s[i]=='1'||s[i]=='4')
            {
                for(int j=0;j<=n+1;j++)
                    cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
        for(int j=1;j<=n;j++)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0'||s[i]=='4'||s[i]=='8'||s[i]=='9')
                {
                    cout<<"|";
                    for(int k=1;k<=n;k++)
                        cout<<" ";
                    cout<<"|";
                }
                else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='7')
                {
                    for(int k=1;k<=n+1;k++)
                        cout<<" ";
                    cout<<"|";
                }
                else if(s[i]=='5'||s[i]=='6')
                {
                    cout<<"|";
                    for(int k=1;k<=n+1;k++)
                        cout<<" ";
                }
                cout<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='7')
            {
                for(int j=1;j<=n+2;j++)
                    cout<<" ";
            }
            else
            {
                cout<<" ";
                for(int j=1;j<=n;j++)
                    cout<<"-";
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
        for(int j=1;j<=n;j++)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='6'||s[i]=='0'||s[i]=='8')
                {
                    cout<<"|";
                    for(int k=1;k<=n;k++)
                        cout<<" ";
                    cout<<"|";
                }
                else if(s[i]=='1'||s[i]=='3'||s[i]=='7'||s[i]=='4'||s[i]=='5'||s[i]=='9')
                {
                    for(int k=1;k<=n+1;k++)
                        cout<<" ";
                    cout<<"|";
                }
                else if(s[i]=='2')
                {
                    cout<<"|";
                    for(int k=1;k<=n+1;k++)
                        cout<<" ";
                }
                cout<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9')
            {
                cout<<" ";
                for(int j=1;j<=n;j++)
                    cout<<"-";
                cout<<" ";
            }
            else if(s[i]=='1'||s[i]=='4'||s[i]=='7')
            {
                for(int j=0;j<=n+1;j++)
                    cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
