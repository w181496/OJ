#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//0一般 1傳送們
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        cin>>n;
        vector<int>a(n),b(n);
        vector<char>c(n);
        for(int j=0;j<n;++j)
        {
            cin>>a[j]>>c[j]>>b[j];
        }
        cout<<c[0];
        int r=b[0];
        while(1)
        {
            bool chk=0;
            for(size_t k=0;k<a.size();++k)
            {
                if(a[k]==r)
                {
                    cout<<c[k];
                    r=b[k];
                    chk=1;
                }
            }
            if(chk==false)break;
        }
        cout<<endl;
    }
    return 0;
}
