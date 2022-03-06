/* write a program that writes even numbers from 1 to 10*/

#include<iostream>
using namespace std;

int main(){
    int i;
    
    for(i=1; i<=10; i++){
        if(i%2==0){
            cout << i << endl;
        }
    }
}
