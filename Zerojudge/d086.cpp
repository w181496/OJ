/**********************************************************************************/
/*  Problem: d086 "態度之重要的證明" from 成功電研20th~21st C++ ～最後的競賽～ */
/*  Language: CPP                                                                 */
/*  Result: AC (5ms, 747KB) on ZeroJudge                                          */
/*  Author: w181496 at 2011-04-03 19:02:45                                        */
/**********************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    long long int b=0,c=0;

    while(cin>>a)
    {
        if(a=="0")break;
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                b+=a[i]-('a'-'A')-64;
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                b+=a[i]-64;
            }
            else
            {
                c=1;
            }
        }
        if(c==1)
        {
            cout<<"Fail"<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
        b=0;
        c=0;
    }


    return 0;
}
