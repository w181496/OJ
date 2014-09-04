#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int m[2010];
        int cnt=0;
        for(int i=0;i<a;++i){
            cin>>m[i];
            if(m[i]+b<=5)cnt++;
        }
        cout<<cnt/3<<endl;
    }
    return 0;
}