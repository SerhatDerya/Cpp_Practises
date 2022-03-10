/* write a program that asks for 10 values from user, sorting them in ascending order and displays the new form of the array */

#include<iostream>
using namespace std;

int main(){
    int i, j, arr[10], ind, temp, a;
    
    for(i=0; i<10; i++){
        cout << "enter the value of the " << i << ". index: ";
        cin >> arr[i];
    }
    
    for(i=0; i<9; i++){
        for(j=i+1; j<10; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for(i=0; i<10; i++){
        cout << arr[i] << " " ;
    }
    
}
