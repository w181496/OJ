#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
	    int s[n];
	    int max=0,min=0xff,sum=0,count=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>s[i];
	        if(s[i]<0)s[i]*=(-1),count--;
	        if(s[i]>max)max=s[i];
	        if(s[i]<min)min=s[i];
	        sum+=s[i];
	        if(s[i]>0)count++;
	    }
	    sum=sum-max-min;
	    cout<<"Average time: ";
	    cout<<fixed<<setprecision(3)<<(double)(sum)/(n-2)<<" sec(s)."<<endl;
        cout<<"Winning rate: "<<fixed<<setprecision(3)<<(double)(count)/n*100.0<<" %."<<endl;
	}
	return 0;
}
