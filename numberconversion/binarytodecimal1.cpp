#include<math.h>
#include <iostream>

using namespace std;

int binarytodecimal(int n){
         // divison method 
    int decimal=0;
    int i=0;
    while(n){
        int bits= n % 10;                //it give reminder answer 
        decimal= bits*pow(2,i) + decimal;                //why these is done written in notes .
        n=n/10;                          // updation in loop .
        i=i+1;
    }
    return decimal;
}

int main(){
    int n;
    cin>>n;
    int binary= binarytodecimal(n);
    cout<<binary<<endl;
}