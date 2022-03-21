/* write a program which store the two distances d1 and d2 by using structure as feet and inch. Use these structures to find sum of them. */

#include <iostream>

using namespace std;

struct distance {
    int feet, inch;
}d1,d2,sum;

int main(){
    cout << "enter the inch of d1: ";
    cin >> d1.inch;
    cout << "enter the feet of d1: ";
    cin >> d1.feet;
    cout << "enter the inch of d2: ";
    cin >> d2.inch;
    cout << "enter the feet of d2: ";
    cin >> d2.feet;
    
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;
    
    while(sum.inch > 12){
        sum.inch -= 12;
        sum.feet++;
    }
    
    cout << "sum inch: " << sum.inch << endl;
    cout << "sum feet: " << sum.feet << endl;
    
}
    
