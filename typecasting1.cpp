#include<iostream>

using namespace std;

int main(){
    // ==implicit casting ==
    // 1.int to float(bcoz float has larger weights )

    int num1 =10;
    float num2=20;
    float result= num1+num2;
    cout<<result<<endl;

    //2. char to int 

    cout<<"------------"<<endl;

    char ch = 'A';               // si value of 'A' = 65
    char a = ch + 1;                 // 65+1=66
    cout<<a<<endl;

    // 3. int to char 

    cout<<"--------------"<<endl;

    char cha = 'A';               // si value of 'A' = 65
    int  b = cha+ 1;                 // 65+1=66='B'
    cout<<b<<endl;

    cout<<"---=---"<<endl;

    int l = 97;
    char charec = l;              // implict conversion int to char 
    cout<<charec<<endl;               // si value of 'a' =97


}