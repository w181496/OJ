#include<iostream>

using namespace std;

int main(){

    long long int a,b;
    int c=0,d=0,e=0;

    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>b;
        if(b%3==0)
        {
            c++;
        }
        else if((b-1)%3==0)
        {
            d++;
        }
        else if((b-2)%3==0)
        {
            e++;
        }
    }
        cout<<c<<" "<<d<<" "<<e<<endl;
        c=0;d=0;e=0;

     return 0;
}
