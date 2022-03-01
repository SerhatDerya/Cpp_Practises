/* Swap two variables without using temporary variable. */

#include <iostream>
using namespace std;

int main(){
    int a, b, sum;
    
    cout << "enter a: " << endl;
    cin >> a;
    
    cout << "enter b: " << endl;
    cin >> b;
    
    sum = a+b;
    
    a=b;
    b = sum - a ;
    
    cout << "first value: " << a << endl << "second value: " << b << endl;
}
