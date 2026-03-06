#include<iostream>
using namespace std;

int main(){
    // hollow rectangle  but diagonal square will fill with star 
     int side;
    cout<<"enter side :  ";
    cin>> side;

    

    for (int row = 0; row < side; row++)    // outer loop 
    {
        for (int col = 0; col < side; col= col+1)   // inner loop
        {
            if (row == 0 || row == side -1){
                cout<< " * ";
            }
            else{     // middle rows

                if (col ==0 || col == side - 1 || row == col){
                    cout<<" * ";
                }
                else{    // middle col 
                    cout<<"   ";     // space = pressed 3 times space button .
                }

            }
        }
        cout<<endl; // ye ma bhul jata hun .
        
    }
    
}