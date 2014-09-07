#include iostream
#include string
#include algorithm
using namespace std;
int main()
{
    ios_basesync_with_stdio(0);
    int n, arr[1010], cnt=0, ans=1, id=-1;
    cinn;
    for(int i=0;in;++i)
    {
        cinarr[i];
        if(arr[i]==1&&id==-1)id=i;
        cnt+=arr[i];
    }
    if(cnt==0)
        cout0endl;
    else
    {
        cnt--;
        int cnt2=0;
        bool flag=true;
        for(int i=id+1;in;++i)
        {
            if(cnt==0)break;
            if(arr[i]==0)cnt2++;
            else
            {
                if(flag)ans+=(cnt2+1);
                else ans+=2,flag=true;
                cnt2=0;
            }
            if(cnt2==2)flag=false;
        }
        coutansendl;
    }
    return 0;
}