#include <iostream>

using namespace std;

int main()
{
    int w;

    while(cin>>w)
    {
        while(w>50)
        {
            cout<<w-1<<endl;
            break;
        }
        while(w<=50)
        {
            cout<<w<<endl;
            break;
        }
    }
    return 0;
}
