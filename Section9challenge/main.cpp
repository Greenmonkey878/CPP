#include <iostream>
#include <vector>

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
                    cout << num << " ";
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
            if(numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else{
                int total{};
                for(auto num: numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total)/numbers.size() << endl;
            }
        }
        else if(selection == 's' || selection == 'S'){
            if(numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else{
                int smallest = numbers.at(0);
                for(auto num:numbers)
                    if(num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        }
        else if(selection == 'l' || selection == 'L'){
            if(numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else{
                int largest = numbers.at(0);
                for(auto num:numbers)
                    if(num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }            
        }
        else if(selection == 'q' || selection == 'Q'){
            cout << "Goodbye" << endl;
        }
        else{
            cout << "Unkown selection" << endl;
        }
            
    }while (selection != 'q' && selection != 'Q');
        
    return 0;
}