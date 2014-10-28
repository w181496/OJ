#include <iostream>  
#include <string>  
using namespace std;  
int f(int );  
int main()  
{  
    int n;  
    cin>>n;  
    for(int i=1;i<=n;++i)  
    {  
        int r;  
        cin>>r;  
        while(r>9)  
        {  
            r=f(r);  
        }  
        if(r==2)cout<<"2, Yes"<<endl;  
        else cout<<r<<", No"<<endl;  
    }  
    return 0 ;  
}  
int f(int n)  
{  
    int t=0;  
    while(n>0)  
    {  
        t+=n%10;  
        n/=10;  
    }  
    return t;  
}
