#include <iostream>
using namespace std;
int main(void){
    int in0;

    cin >>in0 ;
    int out[in0] ;

    for (int i=0 ;i<in0;i++){
        int in1,sum=0;
        out[i]=0 ;
        
        cin >>in1;
        int in[in1];

        for (int i1=0;i1<in1;i1++){
            cin >>in[i1];
            sum+=in[i1];
            if (sum==0)
                out[i]++;    
        }

    }
    
    for (int i=0 ;i<in0;i++)
        cout <<out[i] <<endl ;
    
    return 0;
}
