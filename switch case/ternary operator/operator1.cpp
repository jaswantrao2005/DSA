#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age";
    cin>>age;

    (age>18)? cout<<"can vote " : cout<<"cannot vote";
    return 0;
}