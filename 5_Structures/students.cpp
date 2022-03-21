/* write a program that stores the name, surname, registration no and note of a student by using struct */

#include <iostream>
using namespace std;

struct student {
  char name[20], surname[20];
  int reg_no, note;
};


int main(){
    int i, sum=0, avg, abv=0, std_number;
    
    cout << "student number: ";
    cin >> std_number;
    struct student stn[std_number];
    
    for(i=0; i<std_number; i++){
        cout << i+1 << ". student" << endl;
        
        cout << "Name: ";
        cin >> stn[i].name;
        
        cout << "Surname: ";
        cin >> stn[i].surname;
        
        cout << "Reg_No: ";
        cin >> stn[i].reg_no;
        
        cout << "Note: ";
        cin >> stn[i].note;
        
        sum += stn[i].note;
    }
    
    avg = sum / std_number;
    
    cout << "Sum : " << sum << endl;
    cout << "Average : " << avg << endl;
    
    for(i=0; i<std_number; i++){
        if(stn[i].note > avg){
            abv += 1;
        }
    }
    
    cout << abv << " grade is above the average";
}
