#include<iostream>

using namespace std;

int main(){
   // Explicit typecasjting 
    // double to int 

    double pi = 3.14195678;
    int thepi =(int)pi;
    cout<<thepi<<endl;

    // 2. float to char
    
    cout<<"----------"<<endl;

    float nu= 65.36;
    char charvalue = char(nu);                // 65.36=65(bcoz it stored in int)='A'
    cout<<charvalue<<endl;

    // 3.int to float

    cout<<"------------"<<endl;

    int a=10;
    int b=3;
    float c= a/((float)b);
    cout<<c<<endl;


}