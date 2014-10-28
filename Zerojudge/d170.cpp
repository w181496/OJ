#include<iostream> 

using namespace std;

int main()
{
    int N;
    int X1,X2,X3,Y1,Y2,Y3;
    
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
        
        int ux1,ux2,uy1,uy2;
        
        ux1 = X2 - X1;
        uy1 = Y2 - Y1;
        ux2 = X3 - X1;
        uy2 = Y3 - Y1;
        
        
        if( (ux1*uy2-ux2*uy1)==0 && (ux1*ux1+uy1*uy1) > (ux2*ux2+uy2*uy2)
            && ux1*ux2+uy1*uy2>=0)
        {
            cout << "該死的東西!竟敢想讓我死！" << endl;
        }
        else
            cout << "父親大人!母親大人!我快到了！" << endl;
        
    }
}
