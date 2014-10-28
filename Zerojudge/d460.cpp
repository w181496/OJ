#include <iostream>

using namespace std;

int main()
{
    int a=0;

    while(cin >> a){
        while(a<6)
        {
            cout<<"0"<<endl;
            break;
        }
        while(6<=a && a<=11){
            cout << "590" << endl;
            break;
        }
        while(12<=a && a<=17){
            cout << "790" << endl;
            break;
        }
        while(18<=a && a<=59){
            cout << "890" << endl;
            break;
        }
        while(a>=60){
            cout << "399" << endl;
            break;
        }
    }


    return 0;
}
