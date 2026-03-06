#include<iostream>
using namespace std;

int sum(int a,int b){
    int totalsum=a+b;
    return totalsum;
}

void print(){
    cout<<"babar"<<endl;
    
}

void MultiPlication(int num){
    for(int i=1;i<5;i++){
        cout<<num*i<<endl;
    }
}

int convertIntoCelcius(int far){
    int celci = (far - 32)*5/9;
    return celci;
}

char convertintoUppercase(int chr){
    char result = chr - 'a' + 'A';
    return result;
}
int main(){ 
    
    //function call 
    print(); 
    
    int ans=sum(5,6);      // here we have to store in integer value. beacause the function is in integer value.
    cout<<ans<<endl;

    cout<<"-------------"<<endl;

    MultiPlication(5);   // here we can directly write the function . because it is in void function .
    
    cout<<"---=--"<<endl;

    int farani=50;
    int answer =convertIntoCelcius(farani);
    cout<<answer<<endl;

    cout<<"=============="<<endl;

    char answ = convertintoUppercase('n');
    cout<<answ<<endl;


    print();

    return 0;
}