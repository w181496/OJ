//沒意義的怪題目...

#include <iostream>
using namespace std;
int main()
{
    double a;
    int n;
    while(cin>>n)
    {
        double sum=0;
        int s=0;
        if(n==0)break;
        int t[n];
        for(int i=0;i<n;++i)
        {
            cin>>t[i];
            sum+=t[i];
        }
        a=sum/n;
        for(int i=0;i<n;++i)
            if(a>t[i])s++;
        cout<<s<<endl;
    }

    return 0;
}
