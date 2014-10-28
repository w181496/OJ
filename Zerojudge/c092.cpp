#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
main()
{
    int time=0;
    string s,s2;
    while(cin>>s)
    {
        double x=0,y=0;
        time++;
        if(s=="END")break;
        for(int i=0;i<s.size();++i)
            if(s[i]==','||s[i]=='.')s[i]=' ';
        stringstream ss(s),ss2;
        while(ss>>s2)
        {
            double n;
            if(s2[s2.size()-1]=='E'&&s2[s2.size()-2]=='N')
            {
                s2[s2.size()-1]=' ';
                s2[s2.size()-2]=' ';
                ss2<<s2;
                ss2>>n;
                n=sqrt(n*n/2);
                x+=n;
                y+=n;
            }
            else if(s2[s2.size()-1]=='E'&&s2[s2.size()-2]=='S')
            {
                s2[s2.size()-1]=' ';
                s2[s2.size()-2]=' ';
                ss2<<s2;
                ss2>>n;
                n=sqrt(n*n/2);
                x+=n;
                y-=n;
            }
            else if(s2[s2.size()-1]=='W'&&s2[s2.size()-2]=='S')
            {
                s2[s2.size()-1]=' ';
                s2[s2.size()-2]=' ';
                ss2<<s2;
                ss2>>n;
                n=sqrt(n*n/2);
                x-=n;
                y-=n;
            }
            else if(s2[s2.size()-1]=='W'&&s2[s2.size()-2]=='N')
            {
                s2[s2.size()-1]=' ';
                s2[s2.size()-2]=' ';
                ss2<<s2;
                ss2>>n;
                n=sqrt(n*n/2);
                x-=n;
                y+=n;
            }
            else if(s2[s2.size()-1]=='N')
            {
                s2[s2.size()-1]=' ';
                ss2<<s2;
                ss2>>n;
                y+=n;
            }
            else if(s2[s2.size()-1]=='S')
            {
                s2[s2.size()-1]=' ';
                ss2<<s2;
                ss2>>n;
                y-=n;
            }
            else if(s2[s2.size()-1]=='W')
            {
                s2[s2.size()-1]=' ';
                ss2<<s2;
                ss2>>n;
                x-=n;
            }
            else if(s2[s2.size()-1]=='E')
            {
                s2[s2.size()-1]=' ';
                ss2<<s2;
                ss2>>n;
                x+=n;
            }
        }
        cout<<"Map #"<<time<<endl;
        cout<<"The treasure is located at (";
        if(x<0&&x>-0.001)x*=-1;
        if(y<0&&y>-0.001)y*=-1;
        cout<<fixed<<setprecision(3)<<x;
        cout<<",";
        cout<<fixed<<setprecision(3)<<y;
        cout<<")."<<endl;
        cout<<"The distance to the treasure is "<<fixed<<setprecision(3)<<sqrt(x*x+y*y)<<"."<<endl;
    }
}
