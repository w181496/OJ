#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool chk(string);
int main()
{
    int n;
    string s,str;
    cin>>n;
    getline(cin,s);
    for(int i=1; i<=n; i++)
    {
        getline(cin,str);
        int g=0;
        for(int v=0; v<str.size(); ++v)
        {
            if(str[v]==' ')
            {
                ++g;
            }
        }
        stringstream ss(str);
        while(ss>>s)
        {
            int t=0;
            while(t<s.size())
            {
                if(chk(s.substr(t,9)))
                {
                    t+=9;
                }
                else if(chk(s.substr(t,7)))
                {
                    t+=7;
                }
                else if(chk(s.substr(t,6)))
                {
                    t+=6;
                }
                else if(chk(s.substr(t,5)))
                {
                    t+=5;
                }
                else if(chk(s.substr(t,4)))
                {
                    t+=4;
                }
                else if(chk(s.substr(t,3)))
                {
                    t+=3;
                }
            }

            if(g>0)
            {
                cout << " ";
            }
            --g;
        }
        cout << endl;
    }
    return 0;
}
bool chk(string s)
{
    if(s=="---.")
    {
        cout<<"A";
        return true;
    }
    else if(s=="--....")
    {
        cout<<"B";
        return true;
    }
    else if(s==".-..-")
    {
        cout<<"C";
        return true;
    }
    else if(s=="-----")
    {
        cout<<"D";
        return true;
    }
    else if(s==".--")
    {
        cout<<"E";
        return true;
    }
    else if(s=="..-.-")
    {
        cout<<"F";
        return true;
    }
    else if(s=="--..--")
    {
        cout<<"G";
        return true;
    }
    else if(s=="-...")
    {
        cout<<"H";
        return true;
    }
    else if(s=="-.--")
    {
        cout<<"I";
        return true;
    }
    else if(s=="..-..-.--")
    {
        cout<<"J";
        return true;
    }
    else if(s=="..-..--")
    {
        cout<<"K";
        return true;
    }
    else if(s=="----.")
    {
        cout<<"L";
        return true;
    }
    else if(s=="..---")
    {
        cout<<"M";
        return true;
    }
    else if(s=="-.-.")
    {
        cout<<"N";
        return true;
    }
    else if(s=="--.-")
    {
        cout<<"O";
        return true;
    }
    else if(s=="--...-")
    {
        cout<<"P";
        return true;
    }
    else if(s=="..-..-..-")
    {
        cout<<"Q";
        return true;
    }
    else if(s==".-.-")
    {
        cout<<"R";
        return true;
    }
    else if(s=="-..-")
    {
        cout<<"S";
        return true;
    }
    else if(s=="...")
    {
        cout<<"T";
        return true;
    }
    else if(s==".-...")
    {
        cout<<"U";
        return true;
    }
    else if(s=="..-...")
    {
        cout<<"V";
        return true;
    }
    else if(s=="..--.")
    {
        cout<<"W";
        return true;
    }
    else if(s=="..-..-.-.")
    {
        cout<<"X";
        return true;
    }
    else if(s=="--..-.")
    {
        cout<<"Y";
        return true;
    }
    else if(s=="..-..-...")
    {
        cout<<"Z";
        return true;
    }
    return false;
}
