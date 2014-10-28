#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

class BigInt
{
private:
    vector<int> num;
public:
    BigInt(){num.push_back(0);};
    BigInt(const string &a);
    BigInt(const BigInt &a){num=a.num;};
    BigInt(long long int a);
    BigInt &operator=(const BigInt &a);
    BigInt &operator+=(const BigInt &b);
    BigInt &operator-=(const BigInt &a);
    string str() const;
    int sign() const;
    friend BigInt operator-(const BigInt &);
};

BigInt operator+(const BigInt &, const BigInt &);
BigInt operator-(const BigInt &, const BigInt &);
bool operator==(const BigInt &, const BigInt &);
bool operator!=(const BigInt &, const BigInt &);
bool operator<(const BigInt &, const BigInt &);
bool operator<=(const BigInt &, const BigInt &);
bool operator>(const BigInt &, const BigInt &);
bool operator>=(const BigInt &, const BigInt &);
ostream & operator<< (ostream &, const BigInt &);
istream & operator>> (istream &, BigInt &);


BigInt::BigInt(const string &a)
{
    if(a[0]=='-')
    {
        for(int i=a.size()-1;i>=1;--i)
        {
            num.push_back((a[i]-'0')*-1);
        }
    }
    else
    {
        for(int i=a.size()-1;i>=0;--i)
        {
            num.push_back(a[i]-'0');
        }
    }
}

BigInt::BigInt(long long int a)
{
    while(a>0)
    {
        num.push_back(a%10);
        a/=10;
    }
}

BigInt &BigInt::operator=(const BigInt &a)
{
    num=a.num;
    return *this;
}

BigInt &BigInt::operator-=(const BigInt &a)
{
    *this+=-a;
    return *this;
}

BigInt operator-(const BigInt &a)
{
    BigInt temp(a);
    for(int i=0;i<temp.num.size();++i)
    {
        temp.num[i]=-temp.num[i];
    }
    return temp;
}

BigInt operator+(const BigInt &a, const BigInt &b)
{
    BigInt temp(a);
    temp+=b;
    return temp;
}

BigInt operator-(const BigInt &a, const BigInt &b)
{
    BigInt temp(a);
    temp-=b;
    return temp;
}

BigInt &BigInt::operator+=(const BigInt &b)
{
    for(int i=0;i<b.num.size();++i)
    {
        while(i>num.size()-1)
            num.push_back(0);
        num[i]+=b.num[i];
    }
    if(num.back()>0)
    {
      for(int i=0;i<b.num.size();++i)
        {
            if(i==num.size()-1)
                num.push_back(0);
            num[i+1]+=num[i]/10;
            num[i]%=10;
        }
        if(num[b.num.size()]>9)
        {
            num[b.num.size()]-=10;
            if(num.size()>b.num.size()+1)
                num[b.num.size()+1]++;
            else
                num.push_back(1);
        }
    }
    else
    {
        for(int i=0;i<b.num.size();++i)
        {
            if(i==num.size()-1)
                num.push_back(0);
            num[i+1]-=(-1*num[i])/10;
            num[i]=((-1*num[i])%10)*-1;
        }
        if(num[b.num.size()]<-9)
        {
            num[b.num.size()]+=10;
            if(num.size()>b.num.size()+1)
                num[b.num.size()+1]--;
            else
                num.push_back(-1);
        }
    }
    for(int i=num.size()-1;i>=0;--i)
    {
        if(num[i]!=0)break;
        else if(num[i]==0&&i>0)num.pop_back();
    }
    if(num.back()>0)
    {
        for(int i=0;i<num.size()-1;++i)
        {
            if(num[i]<0)
            {
                num[i]+=10;
                num[i+1]--;
            }
        }
    }
    else if(num.back()<0)
    {
        for(int i=0;i<num.size()-1;++i)
        {
            if(num[i]>0)
            {
                num[i]-=10;
                num[i+1]++;
            }
        }
    }
    for(int i=num.size()-1;i>=0;--i)
    {
        if(num[i]!=0)break;
        else if(num[i]==0&&i>0)num.pop_back();
    }
    return *this;
}

int BigInt::sign() const
{
    return num.back();
}

string BigInt::str() const
{
    string s;
    if(num.back()<0)
    {
        s+='-';
        for(int i=num.size()-1;i>=0;--i)
        {
            s+=-1*num[i]+'0';
        }
    }
    else
    {
      for(int i=num.size()-1;i>=0;--i)
        {
            s+=num[i]+'0';
        }
    }

    return s;
}

bool operator==(const BigInt &a, const BigInt &b)
{
    BigInt t=a-b;
    return t.sign()==0;
}

bool operator!=(const BigInt &a, const BigInt &b)
{
    return !(a==b);
}
bool operator<(const BigInt &a, const BigInt &b)
{
    BigInt t=a-b;
    return t.sign()<0;
}
bool operator<=(const BigInt &a, const BigInt &b)
{
    return !(a>b);
}
bool operator>(const BigInt &a, const BigInt &b)
{
    BigInt t=a-b;
    return t.sign()>0;
}
bool operator>=(const BigInt &a, const BigInt &b)
{
    return !(a<b);
}

ostream & operator<< (ostream &out, const BigInt &a)
{
    out << a.str();
    return out;
}

istream & operator>> (istream &in, BigInt &n)
{
    string s;
    in >> s;
    BigInt temp(s);
    n=s;
    return in;
}




int main()
{
    int n;
        while(cin>>n){
        vector<BigInt>k(n);
        BigInt temp;
        for(int j=0;j<n;++j)
        {
            cin>>k[j];
        }
        sort(k.begin(),k.end());
        for(int j=0;j<n;++j)
            cout<<k[j]<<endl;
        }
    return 0;
}
