#include<math.h>
#include <iostream>

using namespace std;

int binarytodecimal2(int n){
         // divison method 
    int decimal=0;
    int i=0;
    while(n){
        int bits= (n&1);                //it give reminder answer 
        decimal= bits*pow(2,i) + decimal;                //why these is done written in notes .
        n=n/10;             
        i=i+1;
    }
    return decimal;
}

int main(){
    int n;
    cin>>n;
    int binary =  binarytodecimal2(n);
    cout<<binary<<endl;
    
}
