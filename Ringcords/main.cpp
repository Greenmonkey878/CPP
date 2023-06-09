#include <iostream>

using namespace std;

int main(){
    
    float machine_X{},machine_Y{};
    float value {};
    float X{},Y{};
    float result_Y{};
    float result_X{};
    
    cout << "All values should be done as 0.0000 format:" << endl;
    cout << "\n-------------------------------------------" << endl;
    cout << "From machine enter Value of X: ";
    cin >> machine_X;
    cout << "From machine enter Value of Y: ";
    cin >> machine_Y;
    
    result_X = X;
    cout << "From part enter value X: ";
    cin >> X;
    
    result_Y = Y;
    cout << "From part enter value Y: ";
    cin >> Y;
    
    cout << "\nEnter which hole section you wish to move 1,2,3,4 for moving X and Y, or 5 for adding just X, 6 for adding just Y, 7 for minus X, 8 for minus Y: " << endl;
    cin >> value;
    
    bool done{false};
    
    while(!done){
        cout << "\nEnter which hole section you wish to move 1,2,3,4 for moving X and Y, or 5 for adding just X, 6 for adding just Y, 7 for minus X, 8 for minus Y: ";
        cin >> value;
        if(value <=0 || value >=9)
            cout << "Invalid Enter number 1-8" << endl;
        else{
            cout << "Thank you for your selection:" << endl;
            done = true;
        }
    }
    
    if (value == 1){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing Y movement positive and X negative" << endl;
        result_Y = machine_Y + Y;  
        result_X = machine_X + (-X);
        cout << Y << " + " << machine_Y << " = " << result_Y << endl;
        cout << X << " + " << "(-)" << machine_X << " = " << result_X << endl;
        cout << "Machine Value Y has changed to: " << result_Y << endl;
        cout << "Machine value X has changed to: " << result_X << endl;
        
    }
    else if (value == 2){
        cout << "\n======================================" << endl;
         cout << "You have selected: " << value << " Performing Y movement positive and X positive" << endl;
         result_Y = machine_Y + Y;
         result_X = machine_X + X;
         cout << Y << " + " << machine_Y << " = " << result_Y << endl;
         cout << X << " + " << machine_X << " = " << result_X << endl;
         cout << "Machine value Y has changed to: " << result_Y << endl;
         cout << "Machine Value X has changed to: " << result_X << endl;
    }
    else if (value == 3){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing Y movement negative and X negative" << endl;
        result_Y = machine_Y + (-Y);
        result_X = machine_X + (-X);
        cout << Y << " + " << "(-)" << machine_Y << " = " << result_Y << endl;
        cout << X << " + " << "(-)" << machine_X << " = " << result_X << endl;
        cout << "Machine value Y has changed to: " << result_Y << endl;
        cout << "Machine Value X has changed to: " << result_X << endl;
    }
    else if (value == 4){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing Y movement negative and X Positive" << endl;
        result_Y = machine_Y + (-Y);
        result_X = machine_X + X;
        cout << Y << " + " << "(-)" << machine_Y << " = " << result_Y << endl;
        cout << X << " + " << machine_X << " = " << result_X << endl;
        cout << "Machine value Y has changed to: " << result_Y << endl;
        cout << "Machine Value X has changed to: " << result_X << endl;
    }
    else if (value == 5){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing only X positive movement" << endl;
        result_X = machine_X + X;
        cout << X << " + " << machine_X << " = " << result_X << endl;
        cout << "Machine Value X has changed to: " << result_X << endl;
   }
    else if (value == 6){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing only Y positive movement" << endl;
        result_Y = machine_Y + Y;
        cout << Y << " + " << machine_Y << " = " << result_Y << endl;
        cout << "Machine value Y has changed to: " << result_Y << endl;
    }
    else if (value == 7){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << " Performing only X negative movement" << endl;
        result_X = machine_X + (-X);
        cout << X << " + " << "(-)" << machine_X << " = " << result_X << endl;
        cout << "Machine Value X has changed to: " << result_X << endl;
    }
    else if (value == 8){
        cout << "\n======================================" << endl;
        cout << "You have selected: " << value << "Performing only Y negative movement" << endl;
        result_Y = machine_Y + (-Y);
        cout << Y << " + " << "(-)" << machine_Y << " = " << result_Y << endl;
        cout << "Machine value Y has changed to: " << result_Y << endl;
    }else{
        cout << "\n======================================" << endl;
        cout << "invalid paramiter restart" << endl;
    }
    
    
    
    

    return 0;
}