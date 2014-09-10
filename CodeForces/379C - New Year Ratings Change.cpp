#include <iostream>
#include <algorithm>
using namespace std;
struct Data
{
    int val;
    int id;
};
bool cmp(Data a, Data b)
{
    return a.val<b.val;
}
int n, arr[300010], cnt, idx, mn;
Data data[300010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        data[i].val=arr[i];
        data[i].id=i;
    }
    sort(data, data+n, cmp);
    mn=data[0].val;
    arr[0]=mn;
    for(int i=1;i<n;++i)
    {
        if(data[i].val<=mn)
        {
            arr[data[i].id]=mn+1;
            mn++;
        }
        else
        {
            mn=data[i].val;
            arr[data[i].id]=mn;
        }
    }
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
