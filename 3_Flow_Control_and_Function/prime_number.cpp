/* write a program that indicates the input is a prime number or not */

#include<iostream>
using namespace std;

int main(){
    
    int val,i;
    
    cout << "Enter the value:";
    cin >> val;
    
    if(val<=3){
        cout << "This is prime number";
    }
    
    for(i=2; i<=(val/2); i++){
        
        if((val%i)==0){
            cout << "This is not prime number";
            break;
        }
        
        if(i==val/2){
            cout << "This is prime number";
        }
    }
}
