#include <iostream>
#include <vector>
using namespace std;
typedef long long LL;

struct Node
{
    int  a, b, num;
};

Node n[65536 + 10];
Node edge[65536 + 10];
int main()
{
    ios_base::sync_with_stdio(0);
    int t, a, b, id = 0;
    cin >> t;
    vector<Node>v;
    for(int i = 0; i < t; ++i) {
        cin >> n[i].a >> n[i].b;
        n[i].num = i;
        if(n[i].a == 1) v.push_back(n[i]);
    }

    while(!v.empty())
    {
         Node tmp = v.back();
         //cout << "now:" << tmp.num << " " << tmp.a << " " << tmp.b << endl;
         if(n[tmp.num].a != 1)
         {
              v.pop_back();
              continue;
         }
         edge[id].a = tmp.num;
         edge[id].b = tmp.b;
         id++;
         v.pop_back();
         n[tmp.num].a--;
         n[tmp.b].a--;
         n[tmp.b].b ^= tmp.num;
         if(n[tmp.b].a == 1)
             v.push_back(n[tmp.b]);
    }
    cout << id << endl;
    for(int i = 0; i < id; ++i)
         cout << edge[i].a << " " << edge[i].b << endl;
    return 0;
}
