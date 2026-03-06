#include<iostream>
using namespace std;

void print(){
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
}

int main(){  // by using function . we can call 'print' function as manu we want.
    print();                                   

    cout<<"-------------"<<endl;

    print();

    return 0;
}