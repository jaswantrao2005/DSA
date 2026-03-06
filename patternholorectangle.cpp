#include<iostream>
using namespace std;

int main(){
    // hollow rectangle 
     int length , width;
    cout<<"enter length  "<< endl;
    cin>> length;

    cout << " enter width "<<endl;
    cin>> width;

    for (int row = 0; row < length; row++)    // outer loop 
    {
        for (int col = 0; col < width; col= col+1)   // inner loop
        {
            if (row == 0 || row == length -1){
                cout<< " * ";
            }
            else{     // middle rows

                if (col ==0 || col == width - 1 ){
                    cout<<" * ";
                }
                else{    // middle col 
                    cout<<"   ";     // space = pressed 3 times space button .
                }

            }
        }
        cout<<endl;
        
    }
    
}