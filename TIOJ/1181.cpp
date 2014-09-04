#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vector<int>n(5);
        char ch;
        for(int j=1;j<=72;j++)
        {
            cin>>ch;
            if(ch=='R')
                n[0]=1;
            else if(ch=='G')
                n[1]=1;
            else if(ch=='B')
                n[2]=1;
            else if(ch=='Y')
                n[3]=1;
            else if(ch=='P')
                n[4]=1;

        }
        int h=0;
        for(int j=0;j<5;j++)
            if(n[j]==1)h++;
        cout<<h<<endl;
    }
    return 0;
}