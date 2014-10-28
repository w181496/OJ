#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    for(int i=1; i<=3; i++)
    {
        cin >> a >> b;
        cout << 2*(a+b) << endl;
    }
    return 0;
}
