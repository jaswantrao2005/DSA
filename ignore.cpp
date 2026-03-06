#include<iostream>
using namespace std;
int main(){
    char first,last;
    



   cout<<"enter first name followed by surname :"<<endl;          // in computer we have input buffer. where we dinot need to write cin . bcoz we will automatically get .  
  

   first=cin.get() ;          // get one character . mostly first character will get .
   cin.ignore(256,' ') ;          //ignore until space . or until 256 character .

   last = cin.get();          // after ignore. what character will come .

   cout<<first<<last<<endl;
    
   return 0;
}