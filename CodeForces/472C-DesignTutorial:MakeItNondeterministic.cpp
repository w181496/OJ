#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int n, arr[100010];
    string s[100010], ss[100010];
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1>s2)
            s[i]=s2,ss[i]=s1;
        else
            s[i]=s1,ss[i]=s2;
    }
    for(int i=0;i<n;++i)
    {
         int tmp;
         cin>>tmp;
         arr[i]=tmp-1;
    }
    //for(int i=0;i<n;++i)cout<<s[i]<<endl;
    bool ans=true;
    for(int i=1;i<n;++i)
    {
         if(s[arr[i]]<s[arr[i-1]])
         {
              if(ss[arr[i]]>=s[arr[i-1]])
              {
                    s[arr[i]]=ss[arr[i]];
              }
              else{
                    //cout<<s[arr[i]]<<" "<<s[arr[i-1]]<<endl;
                    ans=false;
                    break;    
              }
         }   
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
