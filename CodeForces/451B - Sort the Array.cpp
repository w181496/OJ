#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[100010],arr2[100010];
void f(int a,int b)
{
    for(int i=a;i<=(a+b)/2;++i)
    {
        int tmp=arr2[i];
        arr2[i]=arr2[b+a-i];
        arr2[b+a-i]=tmp;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,tmp,a=-1,b=-1;
    bool ans;
    while(cin>>n)
    {
        bool test=true;
        ans=false;
        a=-1;
        b=-1;
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;++i)
        {
            if(arr[i]!=arr2[i])
            {
                test=false;
                a=i;
                break;
            }
        }
        if(!test)
        {
            for(int i=n-1;i>=0;--i)
            {
                if(arr[i]!=arr2[i])
                {
                    b=i;
                    break;
                }
            }
            f(a,b);
            bool chk=true;
            for(int i=a;i<=b;++i)
            {
                if(arr[i]!=arr2[i])
                {
                    chk=false;
                    break;
                }
            }
            if(chk)ans=true;
        }
        if(ans)
        {
            cout<<"yes"<<endl;
            cout<<a+1<<" "<<b+1<<endl;
        }
        else if(test)
        {
            cout<<"yes"<<endl;
            cout<<"1 1"<<endl;
        }
        else{cout<<"no"<<endl;}
    }
    return 0;
}