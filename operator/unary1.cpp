#include<iostream>
using namespace std;

int main(){
    int a=5;

    cout<<a<<endl;
    cout<<(++a)<<endl;                // a ki value 6 ho chuki hogi 

    cout<<(a++)<<endl;                 // print kara to 'a' ki value 6 hi hogi . but 'a' ki value 7 ho chuki hogi .

    cout<<a<<endl;                       // yaha par print kya to 7 dikha raha han .

    cout<<"============="<<endl;

    cout<<(--a)<<endl;

    cout<<(a--)<<endl;

    cout<<a<<endl;

    cout<<";;;;;;;;;;;;"<<endl;

    // assignment operator 

    int b=5;
    cout<<b<<endl;

    b+=5;
    cout<<b<<endl;

    b=b+5;
    cout<<b<<endl;

    cout<<"==========="<<endl;

    // bitwise operator 

    cout<< (5&4)<<endl;
    cout<< (7|2)<<endl;

    cout<< (~1)<<endl;

    cout<< (5<<1)<< endl;                         // 5*2                left shift 
    cout<< (5<<2)<< endl;                       // 5*2*2

    cout<<(100>>3)<< endl ;                        // right shift                     100/2=50/2=25

    cout<< (5^5)<<endl;              // xor operator 
    cout<< (5^4)<< endl;

    return 0;


}