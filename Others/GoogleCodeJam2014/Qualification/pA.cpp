#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    ifstream fin("A-small-attempt0.in");
    ofstream fout("A-small-attempt0.out");
    int t;
    fin>>t;
    for(int k=1;k<=t;++k)
    {
        int n, tmp, a[4], b[4],cnt=0,ans;
        fin>>n;
        for(int i=0;i<4;++i)
            if(i==n-1)
                fin>>a[0]>>a[1]>>a[2]>>a[3];
            else
                fin>>tmp>>tmp>>tmp>>tmp;
        fin>>n;
        for(int i=0;i<4;++i)
            if(i==n-1)
                fin>>b[0]>>b[1]>>b[2]>>b[3];
            else
                fin>>tmp>>tmp>>tmp>>tmp;
        for(int i=0;i<4;++i)
            for(int j=0;j<4;++j)
            {
                if(a[i]==b[j])
                {
                    cnt++;
                    ans=a[i];
                }
            }
        fout<<"Case #"<<k<<": ";
        if(cnt==1)fout<<ans<<endl;
        else if(cnt==0)fout<<"Volunteer cheated!"<<endl;
        else fout<<"Bad magician!"<<endl;
    }
    return 0;
}
