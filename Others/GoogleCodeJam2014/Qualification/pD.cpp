#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
#define fin cin
#define fout cout
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    ifstream fin("D-large.in");
    ofstream fout("D-large.out");
    fin>>t;
    for(int k=1;k<=t;++k)
    {
        int n, cnt1=0, cnt2=0;
        double a[1001], b[1001];
        fin>>n;
        for(int i=0;i<n;++i)fin>>a[i];
        for(int i=0;i<n;++i)fin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int chk[1001]={};
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                if(a[i]>b[j]&&chk[j]==0){cnt1++,chk[j]=1;break;}
        int chk2[1001]={};
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                if(b[i]>a[j]&&chk2[j]==0){cnt2++,chk2[j]=1;break;}
        fout<<"Case #"<<k<<": "<<cnt1<<" "<<n-cnt2<<endl;
    }
    return 0;
}
