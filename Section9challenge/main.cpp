#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    
    
    vector <int> numbers{};
    char selection{};
    
    do{
        cout << "\n================================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a numner" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "================================" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        
        
        if(selection == 'p' || selection == 'P'){
            if(numbers.size() == 0)
                cout << "[] - list empty" << endl;
            else{
                cout << "[ ";
                for(auto num: numbers)
                    cout << num << ",";
                cout << "]";
            }
            
        }
        else if(selection == 'a' || selection == 'A'){
            int numbers_added{};
            cout << "Enter an integer to add to the list: ";
            cin >> numbers_added;
            numbers.push_back(numbers_added);
            cout << numbers_added << " added" << endl;
        }
            
        else if(selection == 'm' || selection == 'M'){
            
        }
            
        else if(selection == 's' || selection == 'S'){
            
        }
        else if(selection == 'l' || selection == 'L'){
            
        }
        else
            cout << "Invalid selection" << endl;
            
            
    }while (selection != 'q' && selection != 'Q');
        
        
    
    
    
    
    
    
    
    return 0;
}