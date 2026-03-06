#include<math.h>
#include <iostream>

using namespace std;

int decimalToBinary2(int n){
         // divison method 
    int binaryno=0;
    int i=0;
    while(n>0){
        int bits= (n&1);                //it give reminder answer 
        binaryno= bits*pow(10,i++) + binaryno;                //why these is done written in notes .
        n=n>>1;                          // right shift  .
        
    }
    return binaryno;
}

int main(){
    int n;
    cin>>n;
    int binary =  decimalToBinary2(n);
    cout<<binary<<endl;
    
}
