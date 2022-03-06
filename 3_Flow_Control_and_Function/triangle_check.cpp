/* write a program that checks if it is a triangle or not according to given angles */

#include<iostream>
using namespace std;

int main(){
    int a, b, c, sum;
    
    cout << "Enter the first angle: " ;
    cin >> a;
    cout << "Enter the second angle: ";
    cin >> b;
    cout << "Enter the third angle: ";
    cin >> c;
    
    sum = a+b+c;
    
    if(sum==180){
        cout << "This is a triangle";
    }
    else{
        cout << "This is not a triangle";
    }
}
