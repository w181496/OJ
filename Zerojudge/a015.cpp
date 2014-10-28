#include <iostream>

using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int n[x][y];
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cin>>n[i][j];
            }
        }
        for(int i=0; i<y; i++)
        {
            for(int j=0; j<x; j++)
            {
                if(i==0&&j==0)
                    cout<<n[j][i];
                else if(i!=0&&j==0)
                    cout<<n[j][i];
                else
                    cout<<" "<<n[j][i];
            }
            cout<<endl;
        }
    }
    return 0;
}
