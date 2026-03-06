#include<iostream>
using namespace std;

int main(){

    // half pyramid 
    int n;
    cout<< "enter the value of n : ";
    cin>>n;

    //outer loop = outer loop is for rows .

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout<< " * ";
            
        }
        cout<<endl;
        
    }
    return 0;



}