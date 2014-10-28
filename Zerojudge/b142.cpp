#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,a,b,e,sum=0,all_sum=0,s;
    char c,d;
    string s1,s2;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        s=0;
        cin>>s1>>a>>b>>c>>d>>e;
        if(a>80&&e>0)
            s+=8000;
        if(a>85&&b>80)
            s+=4000;
        if(a>90)
            s+=2000;
        if(a>85&&d=='Y')
            s+=1000;
        if(b>80&&c=='Y')
            s+=850;
        all_sum+=s;
        if(s>sum)
        {
            sum=s;
            s2=s1;
        }

    }
    cout<<s2<<endl;
    cout<<sum<<endl;
    cout<<all_sum<<endl;
}
