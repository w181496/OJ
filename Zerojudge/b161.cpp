#include<vector>
#include<iostream>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        vector<int>ans;
        ans.push_back(1);
        for(int i=1; i<=n; ++i)
        {
            int t=ans.size();
            int flag=1;
            for(int k=0; k<t; ++k)
            {
                if(flag==0)
                    ans[k]=2*(ans[k]-1)+1,flag=1;
                else
                    ans[k]*=2;
                if(k==ans.size()-1&&ans[k]>9)
                {
                    ans.push_back(0);
                    ans[k+1]++;
                    ans[k]-=10;
                    flag=0;
                }
                else if(ans[k]>9)
                {
                    ans[k+1]++;
                    ans[k]-=10;
                    flag=0;
                }
            }
        }
        if(ans[0]==0)
        {
            int r=1;
            while(ans[r]==0)
            {
                r++;
            }
            ans[r]--;
            for(int s=r-1; s>=0; --s)
            {
                ans[s]=9;
            }
        }
        else
        {
            ans[0]--;
        }
        int t=ans.size();
        int flag=1;
        for(int k=0; k<t; ++k)
        {
            if(flag==0)
                ans[k]=2*(ans[k]-1)+1,flag=1;
            else
                ans[k]*=2;
            if(k==ans.size()-1&&ans[k]>9)
            {
                ans.push_back(0);
                ans[k+1]++;
                ans[k]-=10;
                flag=0;
            }
            else if(ans[k]>9)
            {
                ans[k+1]++;
                ans[k]-=10;
                flag=0;
            }
        }
        for(int i=ans.size()-1; i>=0; --i)
            cout<<ans[i];
        cout<<endl;
    }
}
