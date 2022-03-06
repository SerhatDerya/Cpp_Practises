/*write a program that gives the given output 

----------------------------------
Enter a value:4
****
 ***
  **
   *
----------------------------------


*/
#include<iostream>
using namespace std;

int main(){
    int val,i,j,k;
    
    cout << "Enter a value:";
    cin >> val;
    
    for(i=val; i>0; i--){
        
        for(j=val-i; j>0; j--){
            cout << " ";
        }
        
        for(k=i; k>0; k--){
            cout << "*";
        }
        
        cout << endl;
    }
}
