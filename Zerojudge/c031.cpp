#include <iostream>

using namespace std;

int main()
{
    int n,c,x,y,i;
    while(cin>>n)
    {
        x=1;
        y=1;
        int d=1;
        for(i=n;i>d;i-=d,d++);
        if(d%2)c=-1,x=d;
        else c=1,y=d;
        for(int j=1;j<i;++j)
        {
            x=x+c;
            y=y-c;
        }
        cout<<"TERM "<<n<<" IS "<<x<<"/"<<y<<endl;
    }
    return 0;
}
