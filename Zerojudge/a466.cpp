#include <iostream>
#include <string>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        string s;
        cin>>s;
        if(s.size()==3)
        {
            int wrong=0;
            string temp="one";
            for(int j=0;j<3;++j)
                if(s[j]!=temp[j])wrong++;
            if(wrong<=1){cout<<1<<endl;continue;}
            wrong=0;
            temp="two";
            for(int j=0;j<3;++j)
                if(s[j]!=temp[j])wrong++;
            if(wrong<=1){cout<<2<<endl;continue;}
        }
        else if(s.size()==5)
        {
            int wrong=0;
            string temp="three";
            for(int j=0;j<5;++j)
                if(s[j]!=temp[j])wrong++;
            if(wrong<=1){cout<<3<<endl;continue;}
        }
    }
}
