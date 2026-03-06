#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"enter your grade :";
    cin>>grade;

    switch (grade)
    {
    case 'a':
        cout<<"mark between 90 to 100"<<endl;
     break;
    case 'b':cout<<"mark between 80 to 90"<<endl;
    break;
    case 'c':cout<<"mark between 70 to 80"<<endl;
    break;
    case 'd':cout<<"mark between 60 to 70"<<endl;
    break;
            
    
    default: cout<<"you are fail ";
        break;
    }

    return 0;
}