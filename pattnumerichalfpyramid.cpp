#include<iostream>
using namespace std;

int main(){

    // numeric  half pyramid 
    int n;
    cout<< "enter the value of n : ";
    cin>>n;

    //outer loop = outer loop is for rows .

    for (int row = 0; row < n; row++)
    {
        
        for (int col = 0; col < row + 1; col++)        // inner loop .
        {
            cout<< (col +1)<< " ";
        }
        cout<<endl;       // yeh yaad rakhna han .
        
    }
    return 0;

}