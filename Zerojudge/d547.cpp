#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string s;
    int n,m;
    while(cin>>n>>m)
    {
        int map[m];
        for(int i=0;i<m;++i)
        {
            cin>>map[i];
        }
        for(int i=0;i<n;++i)
        {
            int temp;
            vector<int>p;
            cin>>ws;
            getline(cin,s);
            stringstream ss(s);
            while(ss>>temp)
            {
                p.push_back(temp);
            }
            int a,b;
            int in=m-1;
            a=p.back();
            p.pop_back();
            b=p.back();
            p.pop_back();
            if(a>=b)
            {
                if(map[in]!=1)continue;
                else in--;
            }
            else
            {
                if(map[in]!=0)continue;
                else in--;
            }
            int c;
            bool flag=true;
            do
            {
                c=p.back();
                p.pop_back();
                int d;
                if(a>b)d=a-b;
                else d=b-a;
                if(d>=c)
                {
                    if(map[in]!=1){flag=false;break;}
                    else {in--;}
                }
                else
                {
                    if(map[in]!=0){flag=false;break;}
                    else {in--;}
                }
                if(in<0)
                {
                    flag=true;
                    break;
                }
                a=p.back();
                p.pop_back();
                b=p.back();
                p.pop_back();
            }while(!p.empty());
            if(flag)cout<<s<<endl;
        }
    }
    return 0;
}
