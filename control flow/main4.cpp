// nested ifs

#include<iostream>
using namespace std;
int main(){
    float  cgpa;
    cout<<"enter your cgpa :";
    cin>>cgpa;

    int rank;
    cout<<"enter your rank :";
    cin>>rank;

    if (cgpa>9)
    {
        if (rank<10)
        {
            cout<<"a";
        }
        else{
            cout<<"b";
        }
        
    }
    else{
        cout<<"c";
    }

    return 0;
    
}