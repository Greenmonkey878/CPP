#include <iostream>
#include <cstdlib>  // required for random
#include <ctime>    // required for time

using namespace std;

int main(){
    
    int random_number{};
    srand(time(nullptr));
    
    
    
    
    char selection{};
    do{
        cout << "\n====================" << endl;
        cout << "1. Roll 3 sided die" << endl;
        cout << "2. Roll 4 sided die" << endl;
        cout << "3. Roll 6 sided die" << endl;
        cout << "4. Roll 8 sided die" << endl;
        cout << "5. Roll 10 sided die" << endl;
        cout << "6. Roll 20 sided die" << endl;
        cout << "7. Roll 100 sided die" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        
        
        if(selection == '1'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{3};
            for(size_t i{1}; i <=count; ++i)
            random_number = rand() % max + min;   
        cout << "Rolling 3 sided die: " << random_number << endl;
        cout << "Rolling " << count << " of dice: " << endl;
        }
        else if(selection == '2'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{4};   
            for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 4 sided die: " << random_number << endl;
        }
        else if(selection == '3'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{6};
                for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 6 sided die: " << random_number << endl;
        }
        else if(selection == '4'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{8};
                for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 8 sided die: " << random_number << endl;
        }
        else if(selection == '5'){
        size_t count{1};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{10};
                for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 10 sided die: " << random_number << endl;
        }
        else if(selection == '6'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{20};
                for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 20 sided die: " << random_number << endl;
        }
        else if(selection == '7'){
        size_t count{};
        cout << "\nEnter number of dice: ";
        cin >> count;
        int min{1};
        int max{100};
                for(size_t i{1}; i <=count; ++i)
                random_number = rand() % max + min;   
        cout << "Rolling 100 sided die: " << random_number << endl;
        }
        else if(selection == 'Q' || selection == 'q')
        
        cout << "Goodbye" << endl;
        else
        cout << "Invalid selection" << endl;
                
    }while (selection != 'q' && selection != 'Q');
    
    
    
    cout << endl;
    return 0;
}