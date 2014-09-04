#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    int a[100010], b[100010];
    map<int ,int >m;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
        m[a[i]]++;
    }
    for(int i=0;i<n;++i)
        cout<<(n-1)+m[b[i]]<<" "<<2*(n-1)-((n-1)+m[b[i]])<<endl;
    return 0;
}