#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    long long int t=1,d=0,e=0,f=0,g=0,x=0,y=0,z=0,s=0;
    while(cin>>a)
    {
        if(a[0]=='G')
        {
            cout<<"十六夜總計贏了"<<x<<"局比賽\n";
            cout<<"紅美鈴總計贏了"<<y<<"局比賽\n";
            cout<<"帕秋莉·諾雷姬總計贏了"<<z<<"局比賽\n";
            cin>>a;
            cin>>b;
            if(b[0]=='E')
            {
                if(x>y&&x>z)
                {
                    cout<<"趕上旅程\n";
                }
                else
                {
                    cout<<"繼續做家事\n";
                }
                break;
            }
        }
        s=a.size()-1;
        for(int i=0;i<=s;i++)
        {
            if(d==0&&a!="Game Over")
            {
                if(a[1]=='a')
                {
                    e=1;
                }
                else if(a[1]=='c')
                {
                    e=2;
                }
                else if(a[1]=='t')
                {
                    e=3;
                }
                d=1;
            }
            else if(d==1&&(a[i]==',')&&a!="Game Over")
            {
                if(a[i+2]=='a')
                {
                    f=1;
                }
                else if(a[i+2]=='c')
                {
                    f=2;
                }
                else if(a[i+2]=='t')
                {
                    f=3;
                }
                d=2;
            }
            else if(d==2&&(a[i]==',')&&a!="Game Over")
            {
                if(a[i+2]=='a')
                {
                    g=1;
                }
                else if(a[i+2]=='c')
                {
                    g=2;
                }
                else if(a[i+2]=='t')
                {
                    g=3;
                }
                d=3;
            }
        }
        if(e==f&&f==g)
        {
            cout<<"第"<<t<<"局不分勝負"<<endl;
        }
        else if(e!=f&&f!=g&&e!=g&&e!=0&&f!=0&&g!=0)
        {
            cout<<"第"<<t<<"局不分勝負"<<endl;
        }
        else if(e==1&&f==1&&g==2)
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<t<<"局的比賽\n";
            z++;
        }
        else if(e==1&&f==1&&g==3)
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<t<<"局的比賽\n";
            x++;
            y++;
        }
        else if(e==1&&f==2&&g==1)
        {
            cout<<"紅美鈴贏了第"<<t<<"局的比賽\n";
            y++;
        }
        else if(e==1&&f==3&&g==1)
        {
            cout<<"紅美鈴輸了第"<<t<<"局的比賽\n";
            x++;
            z++;
        }
        else if(e==2&&f==1&&g==1)
        {
            cout<<"十六夜贏了第"<<t<<"局的比賽\n";
            x++;
        }
        else if(e==3&&f==1&&g==1)
        {
            cout<<"十六夜輸了第"<<t<<"局的比賽\n";
            y++;
            z++;
        }
        else if(e==2&&f==2&&g==1)
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<t<<"局的比賽\n";
            x++;
            y++;
        }
        else if(e==2&&f==2&&g==3)
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<t<<"局的比賽\n";
            z++;
        }
        else if(e==2&&f==1&&g==2)
        {
            cout<<"紅美鈴輸了第"<<t<<"局的比賽\n";
            x++;
            z++;
        }
        else if(e==2&&f==3&&g==2)
        {
            cout<<"紅美鈴贏了第"<<t<<"局的比賽\n";
            y++;
        }
        else if(e==1&&f==2&&g==2)
        {
            cout<<"十六夜輸了第"<<t<<"局的比賽\n";
            y++;
            z++;
        }
        else if(e==3&&f==2&&g==2)
        {
            cout<<"十六夜贏了第"<<t<<"局的比賽\n";
            x++;
        }
        else if(e==3&&f==3&&g==1)
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<t<<"局的比賽\n";
            z++;
        }
        else if(e==3&&f==3&&g==2)
        {
            cout<<"帕秋莉·諾雷姬輸了第"<<t<<"局的比賽\n";
            x++;
            y++;
        }
        else if(e==3&&f==1&&g==3)
        {
            cout<<"紅美鈴贏了第"<<t<<"局的比賽\n";
            y++;
        }
        else if(e==3&&f==2&&g==3)
        {
            cout<<"紅美鈴輸了第"<<t<<"局的比賽\n";
            x++;
            z++;
        }
        else if(e==1&&f==3&&g==3)
        {
            cout<<"十六夜贏了第"<<t<<"局的比賽\n";
            x++;
        }
        else if(e==2&&f==3&&g==3)
        {
            cout<<"十六夜輸了第"<<t<<"局的比賽\n";
            y++;
            z++;
        }
        else if(e==0&&a!="Game Over")
        {
            cout<<"十六夜贏了第"<<t<<"局的比賽\n";
            x++;
        }
        else if(f==0&&a!="Game Over")
        {
            cout<<"紅美鈴贏了第"<<t<<"局的比賽\n";
            y++;
        }
        else if(g==0&&a!="Game Over")
        {
            cout<<"帕秋莉·諾雷姬贏了第"<<t<<"局的比賽\n";
            z++;
        }
        t++;
        d=0;e=0;f=0;g=0;
    }
    return 0;
}
