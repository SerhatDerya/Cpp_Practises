/* write a program which asks for 10 values from user and displays the lowest value and its occurences */

#include<iostream>
using namespace std;

int main(){
    int i, arr[10], low, count=0;
    
    /* firstly, get the integers from user */
    for(i=0; i<10; i++){
        cout << "enter the value of the " << i << ". index: ";
        cin >> arr[i];
    }
    
    /* determine the lowest integer by examining all of the integers and saving it in low variable */
    low = arr[0];
    for(i=1; i<10; i++){
        if(arr[i] < low){
            low = arr[i];
        }
    }
    
    /* counting the occurences of the lowest (low) integer and saving it in count variable */
    for(i=0; i<10; i++){
        if(arr[i] == low){
            count += 1;
        }
    }
    
    /* printing the information sentence */
    cout << "lowest element is " << low << " and it occured " << count << " times" << endl;
}
