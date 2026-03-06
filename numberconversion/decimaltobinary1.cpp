
#include<math.h>
#include <iostream>

using namespace std;

int decimalToBinary1(int n){
         // divison method 
    int binaryno=0;
    int i=0;
    while(n>0){
        int bits= n % 2;                //it give reminder answer 
        binaryno= bits*pow(10,i) + binaryno;                //why these is done written in notes .
        n=n/2;                          // updation in loop .
        i=i+1;
    }
    return binaryno;
}

int main(){
    int n;
    cin>>n;
    int binary= decimalToBinary1(n);
    cout<<binary<<endl;
}
