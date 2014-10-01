#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int l[6];
    map<int,int>m;
    for(int i=0;i<6;++i){
        cin>>l[i];
        m[l[i]]++;
    }
    bool chk2=false, chk4=false; //2,4
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        //cout<<it->second<<endl;
        if(it->second>=4)chk4=true,it->second-=4;
        if(it->second==2)chk2=true;
    }
    if(chk2 && chk4)cout<<"Elephant"<<endl;
    else if(chk4)cout<<"Bear"<<endl;
    else cout<<"Alien"<<endl;

    return 0;
}
