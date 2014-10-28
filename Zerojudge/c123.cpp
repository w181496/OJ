#include<iostream>
#include<vector>
#include<stack>
using namespace std;
main()
{
    int n,t;
    int flag=1;
    int check=1;
    while(cin>>n)
    {
        if(n==0&&flag==0)
            break;
        flag=1;
        while(flag==1)
        {
            vector<int>s(n);
            for(int i=0; i<n; ++i)
            {
                cin>>t;
                if(t==0)
                {
                    flag=0;
                    break;
                }
                s[i]=t;
            }
            if(flag==0)continue;
            stack<int>r;
            int it=0;
            for(int i=1; i<=n; ++i)
            {
                r.push(i);
                if(s[it]==i)
                {
                    it++;
                    r.pop();
                }
                while(!r.empty()&&s[it]==r.top())
                {
                    it++;
                    r.pop();
                }
            }
            if(it==n)check=0;
            if(!r.empty()&&check==1)
            {
                while(!r.empty()&&s[it]==r.top())
                {
                    it++;
                    r.pop();
                }
                if(it==n)check=0;
            }
            if(check==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            check=1;
        }
    }
}
