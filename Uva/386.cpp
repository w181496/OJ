#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    for(int i=3;i<=200;i++)
    {
        for(int x=2;x<=200;x++)
        {
            for(int y=x;y<=200;y++)
            {
                for(int z=y;z<=200;z++)
                {
                    if(x*x*x+y*y*y+z*z*z==i*i*i)
                    {
                        cout<<"Cube = "<<i<<", Triple = ("<<x<<","<<y<<","<<z<<")"<<endl;
                    }
                }
            }
        }
    }

return 0;
}

