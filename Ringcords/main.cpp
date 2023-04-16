#include <iostream>

using namespace std;

int main(){
    
    int cord1{},cord2{},cord3{},cord4{},cord5{},cord6{},cord7{},cord8{};
    float machine_X{0.0000},machine_Y{0.0000};
    float value {0.0000};
    float X{0.0000},Y{0.0000};
    
    cout << "From machine enter Value of X: ";
    cin >> machine_X;
    cout << "From machine enter Value of Y: ";
    cin >> machine_Y;
    cout << "From part enter value to increase or decrease: ";
    cin >> value;
    
    cord1 = 1;
    cord2 = 2;
    cord3 = 3;
    cord4 = 4;
    cord5 = 5;
    cord6 = 6;
    cord7 = 7;
    cord8 = 8;
    
    float result {0.0000};
    
    result = value + machine_X;
    cout << value << " + " << machine_X << " = " << result << endl;
    cout << "Machine Value X has changed to: " << machine_X << endl;
    
    
    result = value + machine_Y;
    cout << value << " + " << machine_Y << " = " << result << endl;
    cout << "Machine Value Y has changed to: " << machine_Y << endl;
    
    cout << "Enter which hole section you wish to move 1,2,3,4 for moving X and Y, or 5 for adding just X, 6 for adding just Y, 7 for minus X, 8 for minus Y: " << endl;
    cin >> cord1;
    

    
    
    
    
    

    return 0;
}