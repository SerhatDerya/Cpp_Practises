/* Write a program that gives the summation and multiplication of two value. */

#include<iostream>
using namespace std;

int main(){
    int a,b, sum, mult;
    
    cout << "enter the first number: ";
    cin >> a;
    
    cout << "enter the second number: ";
    cin >> b;
    
    sum = a+b;
    mult = a*b;
    
    cout << "sum of the values: " << sum << endl;
    cout << "multiplication of the values: " << mult << endl;
    
}
