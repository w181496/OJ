#include <iostream>

using namespace std;


int main()
{

    string s1,s2;
    while(cin>>s1>>s2)
    {
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<"---------------------------------"<<endl;
        for(int i=31;i>=0;--i)
        {
            s1[i]+=s2[i]-'0';
            if(s1[i]>'1')
            {
                s1[i-1]+=s1[i]/'2';
                s1[i]=s1[i]%'2'+'0';
            }
        }
        cout<<s1<<endl;
        cout<<"****End of Data******************"<<endl;
    }
    return 0;
}
