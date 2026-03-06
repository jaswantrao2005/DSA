#include<iostream>
using namespace std;

int main(){

    // inverted hallow half pyramid 
    int n;
    cout<< "enter the value of n : ";
    cin>>n;

    //outer loop = outer loop is for rows .

    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col < n - row ; col++)        // inner loop .
        {
            if(row == 0 || row == n-1 || col == 0 || (row + col == n-1)){
                cout<<" * ";
            }
            else{
              cout<<"   ";
            }
            
        }
        cout<<endl;       // yeh yaad rakhna han .
        
    }
    return 0;



}