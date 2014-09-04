#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    getline(cin,s);
    for(int j=1;j<=n;++j)
    {
        getline(cin,s);
        int sum=0;
        for(size_t i=0;i<s.size();++i)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w')//按1次
                sum++;
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')//按2次
                sum+=2;
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')//按3次
                sum+=3;
            else if(s[i]=='s'||s[i]=='z')//按4次
                sum+=4;
            else
                sum++;
        }
        cout<<"Case #"<<j<<": "<<sum<<endl;
    }
    return 0;
}

