#include<iostream>
using namespace std;

int main(){
    // total rows= 4
    //  every row -> 4 star 

    // row = outer loop 
    // colum = inner loop 

    // outer loop has 4 rows 

    for (int row = 0; row < 4; row++)
    {
        // inner loop -> 4 star print 
        // hr row me kya krna hai,vo inner loop bateyga .
        for (int col = 0; col < 4; col++)
        {
            // hr 1 col me. 1 star rakha hai.
            cout<<"* ";
        }
        // 4 star print krna k baad, next line ma aata hun.
        cout<<endl;
        
    }
    return 0;
    
}