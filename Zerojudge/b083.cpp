#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int w,l,n;
    char ch;
    int a,b,t;
    double c,d;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>n;
        char cch[n];
        string name[n];
        double dd[n];
        int aa[n],bb[n];
        for(int i=0;i<n;++i)
        {
            cin>>cch[i]>>name[i]>>aa[i]>>bb[i]>>dd[i];
        }
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                if(cch[i]=='B'&&cch[j]=='P'&&i<j)
                {
                    ch=cch[i];
                    cch[i]=cch[j];
                    cch[j]=ch;
                    s=name[i];
                    name[i]=name[j];
                    name[j]=s;
                    aa[i]+=aa[j];
                    aa[j]=aa[i]-aa[j];
                    aa[i]-=aa[j];
                    bb[i]+=bb[j];
                    bb[j]=bb[i]-bb[j];
                    bb[i]-=bb[j];
                    dd[i]+=dd[j];
                    dd[j]=dd[i]-dd[j];
                    dd[i]-=dd[j];
                }
                else if(cch[i]=='P'&&cch[j]=='P')
                {
                    if(aa[i]<aa[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                    else if(aa[i]==aa[j]&&bb[i]>bb[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                    else if(aa[i]==aa[j]&&bb[i]==bb[j]&&dd[i]>dd[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                }
                else if(cch[i]=='B'&&cch[j]=='B')
                {
                    if(aa[i]<aa[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                    else if(aa[i]==aa[j]&&bb[i]<bb[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                    else if(aa[i]==aa[j]&&bb[i]==bb[j]&&dd[i]<dd[j])
                    {
                        ch=cch[i];
                        cch[i]=cch[j];
                        cch[j]=ch;
                        s=name[i];
                        name[i]=name[j];
                        name[j]=s;
                        aa[i]+=aa[j];
                        aa[j]=aa[i]-aa[j];
                        aa[i]-=aa[j];
                        bb[i]+=bb[j];
                        bb[j]=bb[i]-bb[j];
                        bb[i]-=bb[j];
                        dd[i]+=dd[j];
                        dd[j]=dd[i]-dd[j];
                        dd[i]-=dd[j];
                    }
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            cout<<cch[i]<<" "<<name[i]<<endl;
        }
        if(t>=1)cout<<"====="<<endl;
    }
    return 0;
}
