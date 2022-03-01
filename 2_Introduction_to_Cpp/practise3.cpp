/* Swap two variable by using a temporary variable. */

#include<iostream>
using namespace std;

int main(){
   
    int a, b, temp;
    
    cout << "enter the first value: " << endl;
    cin >> a;
    
    cout << "enter the second value: " << endl;
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "first value: " << a << endl << "second value" << b << endl;
    
    
}
