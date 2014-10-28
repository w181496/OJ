#include <iostream>
#include <vector>
#include <string>
using namespace std;
int change(string);
void change2(int);
int main()
{
    string s1, s2, ans;
    int num1, num2, n, h, m;
    while(cin >> s1 >> s2)
    {
        if(s1 == "#"||s2 == "#")break;
        num1 = change(s1);
        num2 = change(s2);
        n=num1*3600+num2*60;
        if(n>=59400)
            n=n+27000-86400;
        else
            n=n+27000;
        h=n/3600;
        n%=3600;
        m=n/60;
        change2(h);
        cout<<endl;
        change2(m);
        cout << endl;
    }
    return 0;
}
int change(string s)
{
    vector<int>n(s.size());
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'I')
            n.push_back(1);
        else if(s[i] == 'V')
             n.push_back(5);
        else if(s[i] == 'X')
             n.push_back(10);
        else if(s[i] == 'L')
             n.push_back(50);
        else if(s[i] == 'C')
             n.push_back(100);
        else if(s[i] == 'D')
             n.push_back(500);
        else if(s[i] == 'M')
             n.push_back(1000);
    }
    for(int i = 1;i < n.size(); i++)
    {
        if(n[i]>n[i-1])
        {
            sum += -1*n[i-1];
        }
        else
        {
            sum += n[i-1];
        }
    }
    sum += n[n.size()-1];

    return sum;
}
void change2(int n)
{
    if(n == 0) cout << "ZERO";
    string s;
    int t = n/1000;
    n %= 1000;
    int t1 = n/100;
    n %= 100;
    if(t1 > 7)
    {
        for(int i = 1; i <= t; i++)
            cout << "M";
        for(int i = 1; i <= 10-t1; i++)
            cout << "C";
        cout << "M";
    }
    else
    {
        for(int i = 1; i <= t; i++)
            cout << "M";
        if(t1 >= 5)
        {
            cout << "D";
            for(int i = 1;i <= t1-5; i++)
                cout << "C";
        }
        else if(t1 > 3)
        {
            for(int i = 1; i <= 5-t1; i++)
                cout << "C";
            cout << "D";
        }
        else
        {
            for(int i = 1; i <= t1; i++)
                cout << "C";
        }
    }
    t1 = n/10;
    n %= 10;
    if(t1 > 7)
    {
        for(int i = 1; i <= 10-t1; i++)
            cout << "X";
        cout << "C";
    }
    else if(t1 > 5)
    {
        cout << "L";
        for(int i = 1; i <= t1-5; i++)
            cout << "X";
    }
    else if(t1 > 3)
    {
        for(int i = 1; i <= 5-t1; i++)
            cout << "X";
        cout << "L";
    }
    else
    {
        for(int i = 1; i <= t1; i++)
            cout << "X";
    }
    t1 = n;
    if(t1 > 8)
    {
        for(int i = 1; i <= 10-t1; i++)
            cout << "I";
        cout << "X";
    }
    else if(n > 5)
    {
        cout << "V";
        for(int i = 1; i <= t1-5; i++)
            cout << "I";
    }
    else if(n > 3)
    {
        for(int i = 1; i <= 5-t1; ++i)
            cout << "I";
        cout << "V";
    }
    else
    {
        for(int i = 1 ;i <= t1; i++)
            cout << "I";
    }
}
