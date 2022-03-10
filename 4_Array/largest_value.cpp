/* write a program that asks for 10 values from user and displays the index of the largest value */

#include<iostream>
using namespace std;

int main(){
    int i, arr[10], ind;
    
    for(i=0; i<10; i++){
        cout << "enter the value of the " << i << ". index: ";
        cin >> arr[i];
    }
    
    for(i=1; i<10; i++){
        if(arr[i] > arr[i-1]){
            ind = i;
        }
    }
    
    cout << "the index of the largest element is " << ind << endl;
}
