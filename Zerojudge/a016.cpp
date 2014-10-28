#include <iostream>

using namespace std;

int main()
{
    int n[9][9];
    while(cin>>n[0][0]>>n[0][1]>>n[0][2]>>n[0][3]>>n[0][4]>>n[0][5]>>n[0][6]>>n[0][7]>>n[0][8])
    {
        bool c=1;
        for(int i=1; i<9; ++i)
        {
            for(int j=0; j<9; ++j)
            {
                cin>>n[i][j];
            }
        }
        for(int i=0; i<9; ++i)
        {
            bool r[10]= {1,1,1,1,1,1,1,1,1,1};
            for(int j=0; j<9; ++j)
            {
                if(r[n[i][j]])
                {
                    r[n[i][j]]=0;
                }
                else
                {
                    c=0;
                }
            }
        }
        for(int i=0; i<9; ++i)
        {
            bool r[10]= {1,1,1,1,1,1,1,1,1,1};
            for(int j=0; j<9; ++j)
            {
                if(r[n[j][i]])
                {
                    r[n[j][i]]=0;
                }
                else
                {
                    c=0;
                }
            }
        }
        for(int i=0; i<=6; i+=3)
        {
            for(int j=0; j<=6; j+=3)
            {
                bool r[10]= {1,1,1,1,1,1,1,1,1,1};
                if(r[n[i][j]])
                    r[n[i][j]]=0;
                else
                    c=0;
                if(r[n[i][j+1]])
                    r[n[i][j+1]]=0;
                else
                    c=0;
                if(r[n[i][j+2]])
                    r[n[i][j+2]]=0;
                else
                    c=0;
                if(r[n[i+1][j]])
                    r[n[i+1][j]]=0;
                else
                    c=0;
                if(r[n[i+1][j+1]])
                    r[n[i+1][j+1]]=0;
                else
                    c=0;
                if(r[n[i+1][j+2]])
                    r[n[i+1][j+2]]=0;
                else
                    c=0;
                if(r[n[i+2][j]])
                    r[n[i+2][j]]=0;
                else
                    c=0;
                if(r[n[i+2][j+1]])
                    r[n[i+2][j+1]]=0;
                else
                    c=0;
                if(r[n[i+2][j+2]])
                    r[n[i+2][j+2]]=0;
                else
                    c=0;
            }
        }

        if(c)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
