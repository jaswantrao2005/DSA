#include<iostream>
using namespace std;

int main(){

    // hallow half pyramid 
    int n;
    cout<< "enter the value of n : ";
    cin>>n;

    //outer loop = outer loop is for rows .

    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col < row +1 ; col++)        // inner loop .
        {
            if(row == 0 || row == 1 || row == n-1){
                cout<<"*";
            }
            else{
                if(col == 0 || col == row ){              // middle rows 
                    cout << "*";
                }
                else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
        
    }
    return 0;



}