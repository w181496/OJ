#include<iostream>
#include<string>

using namespace std;

int main(){

    long long int a;
    string c;

    while(cin>>c)
    {
        for(int i=0;i<=c.size()-1;i++)
        {
            a=c[i+1]-c[i];
            if(a<0&&i<6)
            {
                cout<<-a;
            }
            else if(a>=0&&i<6)
            {
                cout<<a;
            }
        }
        cout<<endl;
    }

     return 0;
}
