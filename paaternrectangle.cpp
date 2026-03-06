#include<iostream>
using namespace std;

int main(){
    // total row = 3;
    // every row has 5 star 

    // row = outer loop 
    // col = inner loop 

    int length , width;
    cout<<"enter length  "<< endl;
    cin>> length;

    cout << " enter width "<<endl;
    cin>> width;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < width; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}